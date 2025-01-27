/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:43:49 by ksudyn            #+#    #+#             */
/*   Updated: 2025/01/16 14:44:10 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "./ft_printf.h"
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 45
# endif

# define MAX_FD 1024

int					ft_isdigit(int c);
size_t				ft_strlen(const char *s);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strchr(const char *s, int c);
int					ft_atoi(const char *str);
int					ft_atol(const char *nptr);

void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char *s1, char *s2);
char				**ft_split(char const *s, char c);
char				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
int					ft_hexadec(unsigned long nbr, int upper);
int					ft_putnbr(int n);
int					ft_putnbru(unsigned int nbr);
int					ft_putptr(void *ptr);
int					ft_putstr(char *str);
char				*get_next_line(int fd);
int					ft_sqrt(int number);
int					ft_is_sing(char c);
//ft_printf
int					ft_printf(char const *format, ...);
int					ft_putchar_count(char c, int fd);
int					ft_putstr_count(char *s, int fd);
int					ft_putnbr_combined_count(long long n, int fd, int is_unsigned);
int					ft_putnbr_hex_count(unsigned long long n, int fd, int upcase);
int					ft_putaddress_count(void *ptr);

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
	struct s_node	*prev;

	int				index;
}					t_node;

t_node				*ft_lstnew(void *content);
void				ft_lstadd_front(t_node **lst, t_node *new);
int					ft_lstsize(t_node *lst);
t_node				*ft_lstlast(t_node *lst);
void				ft_lstadd_back(t_node **lst, t_node *new);
void				ft_lstclear(t_node **lst, void (*del)(void *));
#endif
