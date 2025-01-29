/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_revise.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:12:54 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/28 15:13:10 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int count_argv(t_list *stack_a)
{
    int count;

    count = 0;
    while (stack_a)
    {
        count++;
		stack_a = stack_a->next; 
    }
    ft_printf("Cantidad de números: %d\n", count);
    return count;
}

void posicion_number(t_list **stack_a)
{
    t_list *temp;
    t_list *current;
    int index;

    temp = *stack_a;
    while (temp != NULL)
    {
        index = 0;
        current = *stack_a;
        while (current != NULL)
        {
            if (temp->content > current->content)
                index++;
            current = current->next;
        }
        temp->posicion = index;
        temp = temp->next;
    }
    
    temp = *stack_a;
    while (temp != NULL)
    {
		ft_printf("Node_number: %d, Posicion: %d\n", temp->content, temp->posicion);

        temp = temp->next;
    }
}

int is_ordered_list(t_list **stack_a)
{
    t_list *node;

    node = *stack_a;
    while(node != NULL && node->next != NULL)
    {
        if(node->posicion > node->next->posicion)
        {
            ft_printf("lista no ordenada \n");
            return (0);
        }
            
        node = node->next;
    }
    ft_printf("lista ordenada \n");
    return(1);
}

