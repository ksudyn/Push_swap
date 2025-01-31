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

typedef struct s_list
{
	int			content;
	struct s_list	*next;
	struct s_list	*prev;

	int				posicion;
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
void	check_dup_parse(t_list *stack_a);
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
//algorithms
void	three_node(t_list	**stack_a);
void	four_node(t_list	**stack_a, t_list	**stack_b);
void	five_node(t_list **stack_a, t_list **stack_b);
//list_revise
int 	count_argv(t_list *stack_a);
void	posicion_number(t_list **stack_a);
int 	is_ordered_list(t_list **stack_a);
t_list 	*comprove_smaller_node(t_list **stack_a);
t_list 	*comprove_bigger_node(t_list **stack_a);
//push_swap_utils
int		ft_error(char *str, int ret_value, t_list **stack);
void	free_array(char **array);
t_list	*create_node(int num);
void	insert_node_at_end(t_list**stack_a, t_list *new_node);
void	free_node_lst(t_list **lst);

#endif
