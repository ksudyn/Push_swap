/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:02:52 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:03:03 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*
void rrr(t_list *dig)
{
    	int	i;

	i = dig->sia - 1;
	while (i > 0)
	{
		swap(&dig->sa[i], &dig->sa[i - 1]);
		i--;
	}
	i = dig->sib - 1;
	while (i - 1 >= 0)
	{
		swap(&dig->sb[i], &dig->sb[i - 1]);
		i--;
	}
	write(1, "rrr\n", 4);
}*/

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	ft_putstr_fd("rrr\n", 1);
}