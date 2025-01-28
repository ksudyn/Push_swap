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
    {
        free_array(num);//esto cuando hay num para lick de memoria
        ft_error("Error: No hay numeros\n", 1, stack_a);
    }
    while (num[i] != NULL)
    {
        to_insert = create_node(ft_atoi(num[i]));

        insert_node_at_end(stack_a, to_insert);

        i++;
    }
}

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
            if (current->content == comparison->content)
            {
                ft_error("Error: Número duplicado\n", 1, &stack_a);
            }
            comparison = comparison->next;
        }
        current = current->next;
    }
}



