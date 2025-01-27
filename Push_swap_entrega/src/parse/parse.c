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

void insert_stack_parse(t_list **stack_a, char **num)
{
    t_list *to_insert;
    int i = 0;

    if (num[i] == NULL)
        ft_error("Error: No hay numeros\n", 1, stack_a);  // Manejo de error si no hay números

    while (num[i] != NULL)
    {
        // Crear un nuevo nodo con el valor convertido de string a entero
        to_insert = create_node(ft_atoi(num[i]));

        // Usamos la función insert_node_at_end para insertar el nuevo nodo
        insert_node_at_end(stack_a, to_insert);

        i++;
    }
}
/*
// Función que verifica si hay números duplicados en la lista
void check_dup_parse(t_list *stack_a)
{
    t_list *current;
    t_list *comparison;

    current = stack_a;
    while (current != NULL && current->next != NULL)
    {
        comparison = current->next;
        while (comparison != NULL)
        {
            if (*((int *)current->content) == *((int *)comparison->content))
            {
                ft_error("Error: Número duplicado\n", 1, stack_a);
            }
            comparison = comparison->next;
        }
        current = current->next;
    }
}*/

