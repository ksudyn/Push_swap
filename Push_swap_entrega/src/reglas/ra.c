/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:31 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:49:34 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_list **a)
{
	t_list	*temp;
	t_list	*move_node;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	*a = (*a)->next; // Mover el inicio al segundo nodo
	temp->next = NULL; // El antiguo primer nodo ahora será el último

	move_node = *a;
	while (move_node->next != NULL) // Buscar el último nodo
		move_node = move_node->next;
	move_node->next = temp; // Conectar el último nodo con el antiguo primero

	ft_putstr_fd("ra\n", 1);
}
