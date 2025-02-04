/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:51:49 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 19:19:52 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sb(t_list **b, int flag)
{
	t_list	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = (*b)->next;
	(*b)->next = temp->next;
	temp->next = *b;
	*b = temp;
	if (flag == 1)
		ft_putstr_fd("sb\n", 1);
}
