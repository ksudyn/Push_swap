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

int	main(int argc, char **argv)
{
	t_list	*stack_a;
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
    count_argv(stack_a);
    check_dup_parse(stack_a);
    posicion_number(&stack_a);
	free_node_lst(&stack_a);
	return (0);
}