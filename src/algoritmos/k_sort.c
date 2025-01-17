/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:04:54 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:05:06 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	const_sort_to_b(t_list **stack_a, t_list **stack_b, int number)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(number) * 7 / 5;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			if (ft_lstsize(*stack_b) > 1)
				rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

int	count_max_rotations(t_list *stack, int max_index)
{
	int	count;

	count = 0;
	while (stack != NULL && stack->index != max_index)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

void	k_sort(t_list **stack_a, t_list **stack_b, int number)
{
	int	rb_count;
	int	rrb_count;

	const_sort_to_b(stack_a, stack_b, number);
	while ((number - 1) >= 0)
	{
		rb_count = count_max_rotations((*stack_b), (number - 1));
		rrb_count = number - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->index != (number - 1))
				rb(stack_b);
			pa(stack_a, stack_b);
			number--;
		}
		else
		{
			while ((*stack_b)->index != (number - 1))
				rrb(stack_b);
			pa(stack_a, stack_b);
			number--;
		}
	}
}
