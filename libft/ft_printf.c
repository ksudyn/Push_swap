/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:32:24 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 15:33:01 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	print_normal_char(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	specifier_ft(char specifier, va_list args)
{
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putnbru(va_arg(args, unsigned int)));
	else if (specifier == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (specifier == 'x')
		return (ft_hexadec(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (ft_hexadec(va_arg(args, unsigned int), 1));
	else
		return (print_normal_char(specifier));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	int		result;

	result = 0;
	va_start(vargs, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			result += specifier_ft(*format, vargs);
		}
		else
			result += print_normal_char(*format);
		format++;
	}
	va_end(vargs);
	return (result);
}
