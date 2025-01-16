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

#include "../includes/pushswap.h"

void	insert_numbers(char **nums, t_list **stack_a)
{
	int		i;
	int		*num;
	t_list	*node;

	i = 0;
	while (nums[i] != NULL)
	{
		num = malloc(sizeof(int));
		*num = ft_atoi(nums[i]);
		node = ft_lstnew(num);
		if (!node)
		{
			ft_lstclear(stack_a, free);
			free_array(nums);
			free(nums);
			print_error(stack_a);
			printf("insert_numbers");
		}
		ft_lstadd_back(stack_a, node);
		i++;
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

void	parse(char **argv, t_list **stack_a)
{
	check_input(argv, stack_a);
	check_digits(argv, stack_a);
	split_parse(argv, stack_a);
	check_dup(*stack_a);
}
