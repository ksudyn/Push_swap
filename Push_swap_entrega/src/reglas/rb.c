/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:55 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:49:57 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*
void	rb(t_list **b)
{
	t_list	*temp;
	t_list	*move_node;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	move_node = *b;
	while (move_node->next != NULL)
		move_node = move_node->next;
	move_node->next = temp;
	temp->prev = move_node;
	temp->next = NULL;
	ft_putstr_fd("rb\n", 1);
}*/
void	rb(t_list **b)
{
	t_list	*temp;
	t_list	*move_node;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	*b = (*b)->next; // Mover el inicio al segundo nodo
	temp->next = NULL; // El antiguo primer nodo ahora será el último

	move_node = *b;
	while (move_node->next != NULL) // Buscar el último nodo
		move_node = move_node->next;
	move_node->next = temp; // Conectar el último nodo con el antiguo primero

	ft_putstr_fd("ra\n", 1);
}