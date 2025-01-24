/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:02:23 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:02:44 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void rrb(t_list **b)
{
    t_list *temp;
    t_list *move_node;

    // Si el stack tiene menos de 2 elementos, no se hace nada
    if (*b == NULL || (*b)->next == NULL)
        return ;

    // Empezamos en el último nodo
    move_node = *b;
    while (move_node->next != NULL)
        move_node = move_node->next;

    // Guardamos el último nodo
    temp = move_node;

    // Desconectamos el último nodo del stack
    move_node->prev->next = NULL;

    // Colocamos el último nodo al principio
    temp->next = *b;
    temp->prev = NULL;

    // Actualizamos la cabeza del stack
    (*b)->prev = temp;
    *b = temp;

    // Imprimimos la acción realizada
    ft_putstr_fd("rrb\n", 1);
}//por comprobar si funciona bien