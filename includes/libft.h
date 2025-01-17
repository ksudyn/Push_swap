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
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
int					ft_atoi(const char *str);
int					ft_atol(const char *nptr);

void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char *s1, char *s2);
char				**ft_split(char const *s, char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
int					ft_hexadec(unsigned long nbr, int upper);
int					ft_printf(char const *format, ...);
int					ft_putnbr(int n);
int					ft_putnbru(unsigned int nbr);
int					ft_putptr(void *ptr);
int					ft_putstr(char *str);
char				*get_next_line(int fd);
int					ft_sqrt(int number);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*prev;

	int				index;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
#endif
