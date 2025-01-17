/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:48:38 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:48:49 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (*a == NULL)
		return ;
	temp = *a;// Almacena temporalmente el primer nodo de a
	*a = (*a)->next;// Actualiza a para apuntar al siguiente nodo
	if (*a)
		(*a)->prev = NULL;// Si a no está vacío, actualiza el puntero prev del nuevo primer nodo
	temp->next = *b;// Conecta el nodo temporal al inicio de b
	if (*b)
		(*b)->prev = temp;// Si b no está vacío, actualiza el puntero prev del antiguo primer nodo
	*b = temp;// Actualiza b para que apunte al nuevo primer nodo
	temp->prev = NULL;// Establece el puntero prev del nuevo primer nodo en NULL
	ft_putstr_fd("pb\n", 1);// Imprime la operación realizada
}
