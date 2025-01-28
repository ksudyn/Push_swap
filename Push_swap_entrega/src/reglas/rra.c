/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:01:51 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:02:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void rra(t_list **a)
{
    t_list *temp;
    t_list *move_node;

    if (*a == NULL || (*a)->next == NULL)
        return ;

    move_node = *a;
    while (move_node->next != NULL)
        move_node = move_node->next;

    temp = move_node;

    move_node->prev->next = NULL;

    temp->next = *a;
    temp->prev = NULL;

    (*a)->prev = temp;
    *a = temp;

    ft_putstr_fd("rra\n", 1);
}