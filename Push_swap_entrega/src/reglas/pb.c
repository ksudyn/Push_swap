/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:48:38 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:48:49 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (*a == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	temp->next = *b;
	if (*b)
		(*b)->prev = temp;
	*b = temp;
	temp->prev = NULL;
	ft_putstr_fd("pb\n", 1);
}
