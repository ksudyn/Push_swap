/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:58:41 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/26 19:59:00 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sb(t_stack *b)
{
    if (b && b->next)
    {  // Asegúrate de que hay al menos dos elementos en B
        int temp = b->value;
        b->value = b->next->value;
        b->next->value = temp;
    }
}
