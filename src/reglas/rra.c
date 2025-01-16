/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:01:51 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:02:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"
/*
void rra(t_list *dig)
{
    	int	i;

	i = dig->sia - 1;
	while (i > 0)
	{
		swap(&dig->sa[i], &dig->sa[i - 1]);
		i--;
	}
	write(1, "rra\n", 4);
}
*/

void	rra(t_list **stack)
{
	t_list	*second_last;
	t_list	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		second_last = *stack;
		while (second_last->next->next != NULL)
			second_last = second_last->next;
		last = second_last->next;
		second_last->next = NULL;
		last->next = *stack;
		(*stack)->prev = last;
		last->prev = NULL;
		*stack = last;
	}
	ft_printf("rra\n");
}