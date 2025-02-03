/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:55 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 17:51:40 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rb(t_list **b)
{
	t_list	*temp;
	t_list	*move_node;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = NULL;
	move_node = *b;
	while (move_node->next != NULL)
		move_node = move_node->next;
	move_node->next = temp;
	ft_putstr_fd("rb\n", 1);
}
