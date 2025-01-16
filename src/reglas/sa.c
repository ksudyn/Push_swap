/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:51:27 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:51:43 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sa(t_list **a)
{
	t_list	*node1;
	t_list	*node2;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	node1 = *a;
	node2 = (*a)->next;
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
	*a = node2;
	ft_putstr_fd("sa\n", 1);
}
