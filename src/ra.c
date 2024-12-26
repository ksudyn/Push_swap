/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:31 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:00:48 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ra(t_stack **a)
{
    if (*a && (*a)->next)
    {  // Asegúrate de que A tenga al menos dos elementos
        t_stack *temp = *a;  // Guarda el primer elemento de A
        *a = (*a)->next;  // Mueve el puntero A al segundo elemento
        temp->next = NULL;  // El primer elemento ya no apunta a nada
        t_stack *last = *a;
        while (last->next)  // Busca el último elemento de A
            last = last->next;
        last->next = temp;  // El primer elemento se mueve al final de A
    }
}
