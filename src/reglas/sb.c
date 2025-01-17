/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:51:49 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:51:59 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sb(t_list **b)
{
	t_list	*node1;
	t_list	*node2;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	node1 = *b;
	node2 = (*b)->next;
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
	*b = node2;
	ft_putstr_fd("sb\n", 1);
}
