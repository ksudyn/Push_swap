/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:02:23 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 19:18:56 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rrb(t_list **b, int flag)
{
	t_list	*move_node;
	t_list	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	move_node = *b;
	while (move_node->next->next != NULL)
		move_node = move_node->next;
	temp = move_node->next;
	move_node->next = NULL;
	temp->next = *b;
	*b = temp;
	if (flag == 1)
		ft_putstr_fd("rrb\n", 1);
}
