/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:43:05 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 18:39:43 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../includes/libft.h"
# include "../includes/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				posicion;
	struct s_list	*next;
}					t_list;
//main
void	push_swap(t_list **stack_a, t_list **stack_b);
int		main(int argc, char **argv);

//parse
int		check_long_number(char *numbers);
int		check_atoi_atol(char *numbers);
int		validate_characters(char *num);
void	validate_range_and_length(char **num, t_list **stack_a);
void	check_num_array(char **num, t_list **stack_a);
void	insert_stack_parse(t_list **stack_a, char **num);
void	check_dup_parse(t_list **stack_a);
// reglas
void	sa(t_list **a, int flag);
void	sb(t_list **b, int flag);
void	pa(t_list **a, t_list **b, int flag);
void	pb(t_list **a, t_list **b, int flag);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a, int flag);
void	rb(t_list **b, int flag);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a, int flag);
void	rrb(t_list **b, int flag);
void	rrr(t_list **a, t_list **b);
//algorithms
void	three_node(t_list	**stack_a);
void	four_node(t_list	**stack_a, t_list	**stack_b);
void	five_node(t_list **stack_a, t_list **stack_b);
//k_sort
void	move_to_stack_b(t_list **stack_a, t_list **stack_b, int number);
int		count_rotations(t_list *stack, int max_posicion);
void	k_sort(t_list **stack_a, t_list **stack_b, int number);
//list_revise
int		count_argv(t_list *stack);
void	posicion_number(t_list **stack_a);
int		is_ordered_list(t_list **stack_a);
t_list	*comprove_smaller_node(t_list **stack_a);
t_list	*comprove_bigger_node(t_list **stack_a);
//push_swap_utils
int		ft_error(char *str, int ret_value, t_list **stack);
void	free_array(char **array);
t_list	*create_node(int num);
void	insert_node_at_end(t_list**stack_a, t_list *new_node);
void	free_node_lst(t_list **lst);
//bonus
//void	comprove_moves(t_list **stack_a, t_list **stack_b);
//void	moves(t_list **stack_a, t_list **stack_b, char *line);
void	moves_check(t_list **stack_a, t_list **stack_b, char *line);

#endif
