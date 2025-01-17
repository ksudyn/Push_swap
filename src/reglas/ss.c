/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:59:12 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 19:59:25 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*
void ss(int *stack_a, int *stack_b)
{
    int temp;

    if (stack_a && stack_a[1])
    {
        temp = stack_a[0];
        stack_a[0] = stack_a[1];
        stack_a[1] = temp;
    }
    if (stack_b && stack_b[1])
    {
        temp = stack_b[0];
        stack_b[0] = stack_b[1];
        stack_b[1] = temp;
    }
    write(1, "ss\n", 3);
}*/

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	ft_putstr_fd("ss\n", 1);
}