/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:48:47 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 18:10:10 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	three_node(t_list	**stack_a)
{
	t_list	*bigger;

	bigger = comprove_bigger_node(stack_a);
	while (!is_ordered_list(stack_a))
	{
		if (bigger == *stack_a)
			ra(stack_a);
		else if (bigger == (*stack_a)->next)
			rra(stack_a);
		else
			sa(stack_a);
	}
}

void	four_node(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*smallest;

	smallest = comprove_smaller_node(stack_a);
	while (!is_ordered_list(stack_a))
	{
		while (smallest != *stack_a)
		{
			ra(stack_a);
		}
		if (smallest == *stack_a)
		{
			pb(stack_a, stack_b);
			if (!is_ordered_list(stack_a))
			{
				three_node(stack_a);
			}
			pa(stack_a, stack_b);
		}
	}
}

void	five_node(t_list **stack_a, t_list **stack_b)
{
	t_list	*smallest;

	smallest = comprove_smaller_node(stack_a);
	while (smallest != *stack_a)
	{
		ra(stack_a);
		smallest = comprove_smaller_node(stack_a);
	}
	pb(stack_a, stack_b);
	while (smallest != *stack_a)
	{
		ra(stack_a);
		smallest = comprove_smaller_node(stack_a);
	}
	pb(stack_a, stack_b);
	if (!is_ordered_list(stack_a))
	{
		three_node(stack_a);
	}
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if (!is_ordered_list(stack_a))
	{
		sa(stack_a);
	}
}
