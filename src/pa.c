/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:59:33 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 19:59:51 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void pa(t_list *dig)
{
    	int	i;

	i = dig->sia;
	dig->sib = dig->sib - 1;
	dig->sia = dig->sia + 1;
	while (i > 0)
	{
		swap(&dig->sa[i], &dig->sa[i - 1]);
		i--;
	}
	dig->sa[0] = dig->sb[0];
	i = 0;
	while (i <= dig->sib)
	{
		dig->sb[i] = dig->sb[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}
