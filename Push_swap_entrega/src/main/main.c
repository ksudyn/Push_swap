/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:04:45 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/24 17:05:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int argc, char **argv) 
{
    t_list *stack_a;
    t_list *stack_b;
    int     i;
    char    **num;

    num = NULL;
    i = 1;
    stack_a = NULL;
    stack_b = NULL;
    if (argc < 2)
    {
        return (0);
    }

    while(argv[i] != NULL)
    {
        num = ft_split(argv[i], ' ');
        parse(argv, &stack_a);
        i++;
    }
    // Si llegamos aquí, significa que todos los números son válidos
    ft_printf("Todos los números son válidos.\n");

    return 0;
}


