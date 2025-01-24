/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:00:34 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:01:19 by ksudyn           ###   ########.fr       */
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

int validate_characters(char *num)
{
    int i = 0;

    while (num[i] != '\0')
    {
        if (!(ft_isdigit(num[i])) && num[i] != '+' && num[i] != '-')
        {
            return (1);
        }
        if ((num[i] == '+' || num[i] == '-') && i > 0)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int validate_range_and_length(char *num)
{
    if (check_atoi_atol(num))
    {
        return (1);
    }
    return (0);
}

int check_num_array(char **nums)
{
    int i = 0;

    while (nums[i] != NULL)
    {
        if (validate_characters(nums[i]) || validate_range_and_length(nums[i]))
            return (1);
        i++;
    }
    return (0);
}
//comprobamos si son numeros validos
