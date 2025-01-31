/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:04:45 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/24 17:05:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int len;

	check_dup_parse(*stack_a);
	posicion_number(stack_a);
	len = count_argv(*stack_a);
	if(!is_ordered_list(stack_a))
	{
		if(len == 2)
				sa(stack_a);
		else if (len == 3)
			three_node(stack_a);
		else if (len == 4)
			four_node(stack_a, stack_b);
		else if (len == 5)
			five_node(stack_a, stack_b);
	}
	ft_printf("lista ordenada \n");
}
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**num;

	num = NULL;
	i = 1;
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
    push_swap(&stack_a, &stack_b);
	free_node_lst(&stack_a);
	return (0);
}