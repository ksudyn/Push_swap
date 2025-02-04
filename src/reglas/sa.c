/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:51:27 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 19:19:36 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list **a, int flag)
{
	t_list	*temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = (*a)->next;
	(*a)->next = temp->next;
	temp->next = *a;
	*a = temp;
	if (flag == 1)
		ft_putstr_fd("sa\n", 1);
}
