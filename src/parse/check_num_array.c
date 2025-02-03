/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:00:34 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/31 20:28:17 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	check_long_number(char *numbers)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (numbers[i] == '-' || numbers[i] == '+')
		i++;
	while (numbers[i] == '0')
		i++;
	while (numbers[i])
	{
		i++;
		count++;
	}
	if (count >= 11)
		return (1);
	return (0);
}

int	check_atoi_atol(char *numbers)
{
	if (check_long_number(numbers))
		return (1);
	else if (ft_atoi(numbers) != ft_atol(numbers))
		return (1);
	return (0);
}

void	validate_range_and_length(char **num, t_list **stack_a)
{
	int	i;

	i = 0;
	while (num[i] != NULL)
	{
		if (num[i] == NULL || *num[i] == '\0')
		{
			free_array(num);
			ft_error("Error: Cadena vacía\n", 1, stack_a);
		}
		if (check_atoi_atol(num[i]))
		{
			free_array(num);
			ft_error("Error: Número fuera de rango\n", 1, stack_a);
		}
		i++;
	}
}

int	validate_characters(char *num)
{
	int	i;

	i = 1;
	if (ft_is_sing(num[0]) || ft_isdigit(num[0]))
	{
		if (ft_is_sing(num[0]) && num[i] == '\0')
			return (0);
		while (ft_isdigit(num[i]) || num[i] == '\0')
		{
			if (num[i] == '\0')
				return (1);
			i++;
		}
	}
	return (0);
}

void	check_num_array(char **num, t_list **stack_a)
{
	int	i;

	i = 0;
	while (num[i] != NULL)
	{
		if (!(validate_characters(num[i])))
		{
			free_array(num);
			ft_error("Error: Número inválido\n", 1, stack_a);
		}
		else
		{
			i++;
		}
	}
}
//comprobamos si son numeros validos
