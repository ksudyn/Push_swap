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

void rra(t_stack **a)
{
    if (*a && (*a)->next)
    {  // Asegúrate de que A tenga al menos dos elementos
        t_stack *last = *a;
        t_stack *second_last = NULL;
        while (last->next)
	{  // Busca el último y penúltimo elemento
            second_last = last;
            last = last->next;
        }
        second_last->next = NULL;  // El penúltimo elemento apunta a NULL
        last->next = *a;  // El último elemento se convierte en el primero
        *a = last;  // Ahora A apunta al último elemento
    }
}
