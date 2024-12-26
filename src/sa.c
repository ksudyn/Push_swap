/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:58:06 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 19:58:32 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sa(t_stack *a)
{
    if (a && a->next)
    {  // Asegúrate de que hay al menos dos elementos en A
        int temp = a->value;
        a->value = a->next->value;
        a->next->value = temp;
    }
}
