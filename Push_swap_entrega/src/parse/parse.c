/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:22:03 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/24 17:26:13 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void check_input(char **argv)
{
    int i = 1;
    
    while (argv[i] != NULL)
    {
        if (validate_characters(argv[i]))
            ft_error("Error: Caracteres invalidos\n", 1);
        
        if (validate_range_and_length(argv[i]))
            ft_error("Error: Numero fuera de rango\n", 1);
        
        i++;
    }
}

void check_digits(char **argv)
{
    int i = 1;
    int nums_valid;

    while (argv[i] != NULL)
    {
        char **nums = ft_split(argv[i], ' ');
        
        nums_valid = check_num_array(nums);
        if (nums_valid)
        {
            free_array(nums);
            ft_error("Error: Subcadena invalida\n", 1);
        }
        
        free_array(nums);
        i++;
    }
}

// Función que divide los argumentos y los inserta en la lista
void split_parse(char **argv, t_list **stack_a)
{
    int i = 1;
    char **nums;
    
    while (argv[i] != NULL)
    {
        // Dividir el argumento en subcadenas de números (separados por espacio)
        nums = ft_split(argv[i], ' ');
        
        // Verificar si las subcadenas de números son válidas
        if (check_num_array(nums)) 
        {
            free_array(nums);
            ft_error("Error: Numeros invalidos en subcadena\n", 1);
        }
        else
        {
            insert_numbers(nums, stack_a);
        }
        
        // Liberar la memoria utilizada para almacenar las subcadenas
        free_array(nums);
        i++;
    }
}


// Función que verifica si hay números duplicados en la lista
void check_dup(t_list *stack_a)
{
    t_list *now;
    t_list *comparison;
    int now_number;
    int comparison_number;

    now = stack_a;
    while (now != NULL && now->next != NULL)
    {
        comparison = now->next;
        now_number = *((int *)now->content);
        
        while (comparison != NULL)
        {
            comparison_number = *((int *)comparison->content);

            if (now_number == comparison_number)
            {
                ft_error("Error: Numero duplicado.\n", 1);
            }

            comparison = comparison->next;
        }
        now = now->next;
    }
}

// Función principal de análisis de los argumentos
void parse(char **argv, t_list **stack_a)
{
    check_input(argv);
    check_digits(argv);
    split_parse(argv, stack_a);
    check_dup(*stack_a);
}

