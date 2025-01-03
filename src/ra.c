/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:31 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:00:48 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void ra(t_list *dig)
{
    	int	i;

	i = 0;
	while (i + 1 < dig->sia)
	{
		swap(&dig->sa[i], &dig->sa[i + 1]);
		i++;
	}
	write(1, "ra\n", 3);
}
