/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:18:56 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/04 19:18:59 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**num;

	num = NULL;
	i = 1;
	stack_b = NULL;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	while (argv[i] != NULL)
	{
		num = ft_split(argv[i], ' ');
		check_num_array(num, &stack_a);
		validate_range_and_length(num, &stack_a);
		insert_stack_parse(&stack_a, num);
		free_array(num);
		i++;
	}
	check_dup_parse(&stack_a);
	posicion_number(&stack_a);
	comprove_moves(&stack_a, &stack_b);
	free_node_lst(&stack_a);
	free_array(num);
	return (0);
}
----

static void	ft_checker(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		moves_check(stack_a, stack_b, line);
		free(line);
		line = get_next_line(0);
	}
	if (is_ordered_list(stack_a))
		ft_printf("OK\n");
	else if (count_argv(*stack_a) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**number;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i] != NULL)
	{
		number = ft_split(argv[i], ' ');
		check_num_array(number, &stack_a);
		validate_range_and_length(number, &stack_a);
		insert_stack_parse(&stack_a, number);
		free_array(number);
		i++;
	}
	check_dup_parse(&stack_a);
	posicion_number(&stack_a);
	ft_checker(&stack_a, &stack_b);
	free_node_lst(&stack_a);
	return (0);
}*/