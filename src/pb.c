/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:03 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:00:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void pb(t_list *dig)
{
    	int	i;

	i = dig->sib;
	dig->sib = dig->sib + 1;
	dig->sia = dig->sia - 1;
	while (i > 0)
	{
		swap(&dig->sb[i], &dig->sb[i - 1]);
		i--;
	}
	dig->sb[0] = dig->sa[0];
	i = 0;
	while (i <= dig->sia - 1)
	{
		dig->sa[i] = dig->sa[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
