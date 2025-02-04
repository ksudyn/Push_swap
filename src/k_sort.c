/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:29:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 19:37:58 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	move_to_stack_b(t_list **stack_a, t_list **stack_b, int number)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(number) * 7 / 5;
	while (*stack_a)
	{
		if ((*stack_a)->posicion <= i)
		{
			pb(stack_a, stack_b, 1);
			if (count_argv(*stack_b) > 1)
				rb(stack_b, 1);
			i++;
		}
		else if ((*stack_a)->posicion <= i + range)
		{
			pb(stack_a, stack_b, 1);
			i++;
		}
		else
			ra(stack_a, 1);
	}
}

int	count_rotations(t_list *stack, int max_posicion)
{
	int	count;

	count = 0;
	while (stack != NULL && stack->posicion != max_posicion)
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

	move_to_stack_b(stack_a, stack_b, number);
	while ((number - 1) >= 0)
	{
		rb_count = count_rotations((*stack_b), (number - 1));
		rrb_count = number - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->posicion != (number - 1))
				rb(stack_b, 1);
			pa(stack_a, stack_b, 1);
			number--;
		}
		else
		{
			while ((*stack_b)->posicion != (number - 1))
				rrb(stack_b, 1);
			pa(stack_a, stack_b, 1);
			number--;
		}
	}
}
