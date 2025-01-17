/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:12:57 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:13:06 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	init_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	nums;

	nums = ft_lstsize(*stack_a);
	get_index(stack_a);
	if (!nums_ordered(stack_a))
	{
		if (nums == 2)
			sa(stack_a);
		else if (nums == 3)
			sort_three(stack_a);
		else if (nums == 4)
			sort_four(stack_a, stack_b, nums);
		else if (nums == 5)
			sort_five(stack_a, stack_b, nums);
		else
			k_sort(stack_a, stack_b, nums);
	}
}
