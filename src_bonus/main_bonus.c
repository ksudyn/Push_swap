/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:18:56 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/04 20:16:20 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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
	return (0);
}
