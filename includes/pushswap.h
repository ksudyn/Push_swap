/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:43:05 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:03:33 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../includes/libft.h"
# include "../includes/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

//// algorithms
void	k_sort(t_list **stack_a, t_list **stack_b, int number);
int		count_max_rotations(t_list *stack, int max_index);
void	const_sort_to_b(t_list **stack_a, t_list **stack_b, int number);
void	sort_five(t_list **stack_a, t_list **stack_b, int digits);
void	sort_four(t_list **stack_a, t_list **stack_b, int digits);
void	order_numbers(t_list **stack_a, int first, int second, int third);
void	sort_three(t_list **stack_a);

// reglas
void	sa(t_list **a);
void	sb(t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

// push_swap_utils
void	check_digits(char **argv, t_list **stack_a);
void	check_dup(t_list *stack_a);
int		check_length(char *numbers);
int		check_overflow(char *numbers);
void	check_input(char **argv, t_list **stack_a);
int		check_num_array(char **nums);
void	insert_numbers(char **nums, t_list **stack_a);
void	split_parse(char **argv, t_list **stack_a);
void	parse(char **argv, t_list **stack_a);
void	print_error(t_list **stack_a);
void	*free_array(char **array);

// principal
int		nums_ordered(t_list **stack);
void	get_index(t_list **stack);
int		count_index_position(t_list **stack, int index);
void	init_push_swap(t_list **stack_a, t_list **stack_b);
int		main(int argc, char **argv);

#endif
