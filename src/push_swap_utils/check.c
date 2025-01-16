/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:00:34 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:01:19 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

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

int	check_length(char *numbers)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (numbers[i] == '-' || numbers[i] == '+')
		i++;
	while (numbers[i] == '0')
		i++;
	while (numbers[i])
	{
		i++;
		count++;
	}
	if (count >= 11)
		return (1);
	return (0);
}

int	check_overflow(char *numbers)
{
	if (check_length(numbers))
		return (1);
	else if (ft_atoi(numbers) != ft_atol(numbers))
		return (1);
	return (0);
}

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

int	check_num_array(char **nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nums[i] != NULL)
	{
		while (nums[i][j] != '\0')
		{
			if (!(ft_isdigit(nums[i][j + 1])) && (nums[i][j + 1] != '\0'))
				return (1);
			j++;
		}
		j = 0;
		if (check_overflow(nums[i]))
			return (1);
		i++;
	}
	return (0);
}
