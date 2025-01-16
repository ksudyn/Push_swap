/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:55 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:49:57 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"
/*
void rb(t_list *dig)
{
	int	i;

	i = 0;
	while (i + 1 < dig->sib)
	{
		swap(&dig->sb[i], &dig->sb[i + 1]);
		i++;
	}
	write(1, "rb\n", 3);
}*/

void	rb(t_list **b)
{
	t_list	*first;
	t_list	*last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	ft_putstr_fd("rb\n", 1);
}
