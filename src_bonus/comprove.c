/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:57:24 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/04 15:57:31 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	moves(t_list **stack_a, t_list **stack_b, char *line)
{
	if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rra(stack_a, 0);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrb(stack_b, 0);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr(stack_a, stack_b);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(stack_a, 0);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(stack_b, 0);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(stack_a, 0);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(stack_b, 0);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(stack_a, stack_b);
	else
		ft_error("Error: Movimiento inválido\n", 1, stack_a);
}

void	comprove_moves(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = NULL;
	line = get_next_line(0);
	while (line)
	{
		moves(stack_a, stack_b, line);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (is_ordered_list(stack_a))
		ft_printf("OK\n");
	else if (count_argv(*stack_a) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
