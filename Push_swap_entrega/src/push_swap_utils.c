/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:41:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/24 15:41:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int ft_error(char *str, int ret_value, t_list **stack)
{
    if (stack != NULL)
        free_node_lst(stack);  // Liberar la memoria asociada con stack si no es NULL

    ft_putstr_fd(str, 2);  // Imprimir el mensaje de error
    ft_putstr_fd("\n", 2);  // Imprimir salto de línea

    exit(ret_value);  // Terminar el programa con el código de salida 1
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

t_list *create_node(int num)//bien
{
    t_list *node;

    node = ft_calloc(1, sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = num;
	node->next = NULL;
    return node;
}

void insert_node_at_end(t_list**stack_a, t_list *new_node)
{
    t_list *last;

    if (new_node == NULL)
        return; // Si el nuevo nodo es NULL, no hacer nada

    if (*stack_a == NULL)
    {
        // Si la pila está vacía, el nuevo nodo se convierte en el primer nodo
        *stack_a = new_node;
    }
    else
    {
        // Si la pila no está vacía, recorremos hasta el último nodo
        last = *stack_a;
        while (last->next != NULL)
            last = last->next;
        
        // Enlazamos el último nodo con el nuevo nodo
        last->next = new_node;
    }
}

void	free_node_lst(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}
