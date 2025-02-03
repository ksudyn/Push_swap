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

int count_argv(t_list *stack)
{
    int count;

    count = 0;
    while (stack)
    {
        count++;
		stack = stack->next; 
    }
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
            return (0);
        }
            
        node = node->next;
    }
    return(1);
}

t_list *comprove_smaller_node(t_list **stack_a)
{
    t_list *node;
    t_list  *smallest_node;

    if(!stack_a || !*stack_a)
    {
        ft_printf("nada que comprobar");
        return(NULL);
    }

    node = *stack_a;
    smallest_node = *stack_a;
    while(node != NULL)
    {
        if(node->posicion < smallest_node->posicion)
            smallest_node = node;
        node = node->next;
    }
    //ft_printf("nodo mas bajo: %d\n", smallest_node->content);
    return(smallest_node);
}

t_list *comprove_bigger_node(t_list **stack_a)
{
    t_list *node;
    t_list *biggest_node;

    if (!stack_a || !*stack_a)
    {
        return (NULL);
    }

    node = *stack_a;
    biggest_node = *stack_a;

    while (node != NULL)
    {
        if (node->posicion > biggest_node->posicion)
            biggest_node = node;
        node = node->next;
    }

    //ft_printf("nodo mas alto: %d\n", biggest_node->content);
    return (biggest_node);
}
