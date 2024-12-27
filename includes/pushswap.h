/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:34:34 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/27 15:34:47 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include<unistd.h>
# include<stdlib.h>

typedef struct s_list
{
	int	*sa;
	int	*sb;
	int	*sp;
	int	sia;
	int	sib;
	int	sip;
	int	lsp;
}	t_list;

void pa(t_list *dig);
void pb(t_list *dig);
void ra(t_list *dig);
void rb(t_list *dig);
void rr(t_list *dig);
void rr(t_list *dig);
void rra(t_list *dig);
void rrb(t_list *dig);
void rrr(t_list *dig);
void sa(int *sa);
void sb(int *sb);
void	ss(int *stack_a, int *stack_b);

#endif
