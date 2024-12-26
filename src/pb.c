/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:03 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:00:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void pb(t_stack **a, t_stack **b)
{
    if (*a)
    {  // Asegúrate de que A no esté vacío
        t_stack *temp = *a;  // Guarda el primer elemento de A
        *a = (*a)->next;  // Elimina el primer elemento de A
        temp->next = *b;  // Pone el elemento al principio de B
        *b = temp;  // Ahora B apunta al nuevo primer elemento
    }
}
