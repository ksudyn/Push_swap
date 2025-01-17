/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:05:32 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:05:35 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_five(t_list **stack_a, t_list **stack_b, int digits)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0 && (*stack_a)->index != 1)
		{
			if ((count_index_position(stack_a, 0) <= (digits / 2))
				|| (count_index_position(stack_a, 1) <= (digits / 2)))
				ra(stack_a);
			else
				rra(stack_a);
		}
		if (((*stack_a)->index == 0) || ((*stack_a)->index == 1))
			pb(stack_a, stack_b);
	}
	if (!nums_ordered(stack_a))
		sort_three(stack_a);
	if (nums_ordered(stack_a))
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
