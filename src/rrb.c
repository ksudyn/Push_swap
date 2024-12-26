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

void rrb(t_stack **b)
{
    if (*b && (*b)->next)
    {  // Asegúrate de que B tenga al menos dos elementos
        t_stack *last = *b;
        t_stack *second_last = NULL;
        while (last->next)
	{  // Busca el último y penúltimo elemento
            second_last = last;
            last = last->next;
        }
        second_last->next = NULL;  // El penúltimo elemento apunta a NULL
        last->next = *b;  // El último elemento se convierte en el primero
        *b = last;  // Ahora B apunta al último elemento
    }
}
