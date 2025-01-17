/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:01:51 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:02:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_list **stack)
{
	t_list	*second_last;
	t_list	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		second_last = *stack;
		while (second_last->next->next != NULL)
			second_last = second_last->next;
		last = second_last->next;
		second_last->next = NULL;
		last->next = *stack;
		(*stack)->prev = last;
		last->prev = NULL;
		*stack = last;
	}
	ft_printf("rra\n");
}
void rra(t_list **a)
{
    t_list *temp;
    t_list *move_node;

    // Si el stack tiene menos de 2 elementos, no se hace nada
    if (*a == NULL || (*a)->next == NULL)
        return ;

    // Empezamos en el último nodo
    move_node = *a;
    while (move_node->next != NULL)
        move_node = move_node->next;

    // Guardamos el último nodo
    temp = move_node;

    // Desconectamos el último nodo del stack
    move_node->prev->next = NULL;

    // Colocamos el último nodo al principio
    temp->next = *a;
    temp->prev = NULL;

    // Actualizamos la cabeza del stack
    (*a)->prev = temp;
    *a = temp;

    // Imprimimos la acción realizada
    ft_putstr_fd("rra\n", 1);
}//por comprobar si funciona bien