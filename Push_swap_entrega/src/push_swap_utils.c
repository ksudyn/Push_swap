/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:41:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/24 15:41:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_error(char *str, int ret_value)
{
	ft_putstr_fd(str, 2);
	return (ret_value);
}

void	*free_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

t_list *create_node(int num)
{
    t_list *node;

    node = ft_lstnew(&num);  // Crear un nuevo nodo con el valor num
    if (!node)
    {
        return NULL;  // Si falla la creación, retornar NULL
    }
    return node;
}

int convert_and_insert(char *str, t_list **stack_a)
{
    int num;
    t_list *node;

    num = ft_atoi(str);  // Convertir la cadena a número entero
    node = create_node(num);  // Crear el nodo

    if (!node)  // Si no se pudo crear el nodo
    {
        return 0;  // Indicar error
    }

    ft_lstadd_back(stack_a, node);  // Insertar el nodo en la lista
    return 1;  // Indicar éxito
}

void insert_numbers(char **nums, t_list **stack_a)
{
    int i = 0;
    int num;
    t_list *node;

    while (nums[i] != NULL)
    {
        num = ft_atoi(nums[i]);  // Convertir la cadena a número
        node = ft_lstnew(&num);  // Crear el nodo

        if (!node)  // Si no se pudo crear el nodo
        {// Limpiar la lista y liberar memoria
            ft_lstclear(stack_a, free);  // Limpiar la lista
            free_array(nums);  // Liberar el array de cadenas
            free(nums);  // Liberar el puntero al array de cadenas
			ft_error("Error: Insert_number\n", 1);
        }

        ft_lstadd_back(stack_a, node);  // Insertar el nodo en la lista
        i++;
    }
}

