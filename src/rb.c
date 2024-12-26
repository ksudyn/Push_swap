/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:00:55 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 20:01:15 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rb(t_stack **b)
{
    if (*b && (*b)->next)
    {  // Asegúrate de que B tenga al menos dos elementos
        t_stack *temp = *b;
        *b = (*b)->next;
        temp->next = NULL;
        t_stack *last = *b;
        while (last->next)
            last = last->next;
        last->next = temp;
    }
}
