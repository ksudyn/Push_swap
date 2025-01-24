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

//parse
int		check_long_number(char *numbers);
int		check_atoi_atol(char *numbers);
int		validate_characters(char *num);
int		validate_range_and_length(char *num);
int		check_num_array(char **nums);
void	check_input(char **argv);
void	check_digits(char **argv);
void	split_parse(char **argv, t_list **stack_a);
void	check_dup(t_list *stack_a);
void	parse(char **argv, t_list **stack_a);
//main
int		main(int argc, char **argv);
//utils
void	*free_array(char **array);
int		ft_error(char *str, int ret_value);
t_list	*create_node(int num);
int		convert_and_insert(char *str, t_list **stack_a);
void	insert_numbers(char **nums, t_list **stack_a);

#endif
