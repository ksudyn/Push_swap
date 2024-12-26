/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:59:33 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 19:59:51 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void pa(t_stack **a, t_stack **b)
{
    if (*b)
    {  // Asegúrate de que B no esté vacío
        t_stack *temp = *b;  // Guarda el primer elemento de B
        *b = (*b)->next;  // Elimina el primer elemento de B
        temp->next = *a;  // Pone el elemento al principio de A
        *a = temp;  // Ahora A apunta al nuevo primer elemento
    }
}
