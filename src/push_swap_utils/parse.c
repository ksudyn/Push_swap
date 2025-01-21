/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:01:42 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:02:23 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_input(char **argv, t_list **stack_a)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i] != NULL)
	{
		if (argv[i][0] == '\0')
			print_error(stack_a);
		while (argv[i][j] != '\0')
		{
			if (!(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ')
				&& (argv[i][j] != '-') && (argv[i][j] != '+'))
				print_error(stack_a);
			j++;
		}
		j = 0;
		i++;
	}
}

void	check_digits(char **argv, t_list **stack_a)
{
	int	i;
	int	j;
	int	nums;

	i = 1;
	j = 0;
	nums = 0;
	while (argv[i] != NULL)
	{
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]))
				nums++;
			j++;
		}
		if (nums == 0)
			print_error(stack_a);
		j = 0;
		i++;
		nums = 0;
	}
}

void	split_parse(char **argv, t_list **stack_a)
{
	int		i;
	char	**nums;

	i = 1;
	nums = NULL;
	while (argv[i] != NULL)
	{
		nums = ft_split(argv[i], ' ');
		if (check_num_array(nums))
		{
			free_array(nums);
			print_error(stack_a);
		}
		else
		{
			insert_numbers(nums, stack_a);
			free_array(nums);
		}
		i++;
	}
}

void	check_dup(t_list *stack_a)
{
	t_list	*now;
	t_list	*comparison;
	int		now_number;
	int		comparison_number;

	now = stack_a;
	while (now != NULL && now->next != NULL)
	{
		comparison = now->next;
		now_number = *((int *)now->content);
		while (comparison != NULL)
		{
			comparison_number = *((int *)comparison->content);
			if (now_number == comparison_number)
				print_error(&stack_a);
			comparison = comparison->next;
		}
		now = now->next;
	}
}

void	parse(char **argv, t_list **stack_a)
{
	check_input(argv, stack_a);
	check_digits(argv, stack_a);
	split_parse(argv, stack_a);
	check_dup(*stack_a);
}
