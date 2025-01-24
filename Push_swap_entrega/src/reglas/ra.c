/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:31 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:49:34 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_list **a)
{
	t_list	*temp;
	t_list	*move_node;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	move_node = *a;
	while (move_node->next != NULL)
		move_node = move_node->next;
	move_node->next = temp;
	temp->prev = move_node;
	temp->next = NULL;
	ft_putstr_fd("ra\n", 1);
}
