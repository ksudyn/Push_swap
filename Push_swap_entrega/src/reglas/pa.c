/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:48:03 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:48:05 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pushswap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (*b == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	temp->next = *a;
	if (*a)
		(*a)->prev = temp;
	*a = temp;
	temp->prev = NULL;
	ft_putstr_fd("pa\n", 1);
}