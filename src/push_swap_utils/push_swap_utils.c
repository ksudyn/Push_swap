/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:55:29 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:55:40 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	print_error(t_list **stack_a)
{
	if (stack_a != NULL)
		ft_lstclear(stack_a, free);
	write(2, "Error\n", 6);
	exit(1);
}

void	*free_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

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
