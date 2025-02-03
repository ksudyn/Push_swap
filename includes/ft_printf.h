/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:54:27 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/24 15:54:36 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar_count(char c, int fd);
int	ft_putstr_count(char *s, int fd);
int	ft_putnbr_combined_count(long long n, int fd, int is_unsigned);
int	ft_putnbr_hex_count(unsigned long long n, int fd, int upcase);
int	ft_printf(char const *s, ...);
int	ft_putaddress_count(void *ptr);

#endif
