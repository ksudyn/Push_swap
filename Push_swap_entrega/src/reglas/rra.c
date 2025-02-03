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
    t_list *move_node;
    t_list *temp;

    if (*a == NULL || (*a)->next == NULL)
        return;

    move_node = *a;
    while (move_node->next->next != NULL)
        move_node = move_node->next;

    temp = move_node->next;
    move_node->next = NULL;

    temp->next = *a;
    *a = temp;
    ft_putstr_fd("rra\n", 1);
}
