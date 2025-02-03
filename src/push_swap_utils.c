/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:41:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/02/03 18:22:12 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_error(char *str, int ret_value, t_list **stack)
{
	if (stack != NULL)
		free_node_lst(stack);
	ft_putstr_fd(str, 2);
	ft_putstr_fd("\n", 2);
	exit(ret_value);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

t_list	*create_node(int num)
{
	t_list	*node;

	node = ft_calloc(1, sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = num;
	node->next = NULL;
	return (node);
}

void	insert_node_at_end(t_list**stack_a, t_list *new_node)
{
	t_list	*last;

	if (new_node == NULL)
		return ;
	if (*stack_a == NULL)
	{
		*stack_a = new_node;
	}
	else
	{
		last = *stack_a;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
}

void	free_node_lst(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}
