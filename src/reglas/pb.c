/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:48:38 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 19:16:51 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pb(t_list **a, t_list **b, int flag)
{
	t_list	*temp;

	if (*a == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	if (flag == 1)
		ft_putstr_fd("pb\n", 1);
}
