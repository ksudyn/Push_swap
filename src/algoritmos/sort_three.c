/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:06:20 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:06:29 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	order_numbers(t_list **stack_a, int first, int second, int third)
{
	if ((third > second) && (third > first))
		sa(stack_a);
	if ((second > third) && (second > first))
	{
		if (first > third)
			rra(stack_a);
		else
		{
			rra(stack_a);
			sa(stack_a);
		}
	}
	if ((first > second) && (first > third))
	{
		if (second > third)
		{
			ra(stack_a);
			sa(stack_a);
		}
		else
			ra(stack_a);
	}
}

void	sort_three(t_list **stack_a)
{
	t_list	*start;
	int		first;
	int		second;
	int		third;

	start = *stack_a;
	first = *(int *)start->content;
	second = *(int *)start->next->content;
	third = *(int *)start->next->next->content;
	order_numbers(stack_a, first, second, third);
}
