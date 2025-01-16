/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:01:21 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:01:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"
/*
void rr(t_list *dig)
{
    	int	i;

	i = 0;
	while (i + 1 < dig->sia)
	{
		swap(&dig->sa[i], &dig->sa[i + 1]);
		i++;
	}
	i = 0;
	while (i + 1 < dig->sib)
	{
		swap(&dig->sb[i], &dig->sb[i + 1]);
		i++;
	}
	write(1, "rr\n", 3);
}
*/

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	ft_putstr_fd("rr\n", 1);
}
