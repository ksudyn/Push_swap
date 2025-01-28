/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:02:23 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:02:44 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void rrb(t_list **b)
{
    t_list *temp;
    t_list *move_node;

    if (*b == NULL || (*b)->next == NULL)
        return ;

    move_node = *b;
    while (move_node->next != NULL)
        move_node = move_node->next;

    temp = move_node;

    move_node->prev->next = NULL;

    temp->next = *b;
    temp->prev = NULL;

    (*b)->prev = temp;
    *b = temp;

    ft_putstr_fd("rrb\n", 1);
}