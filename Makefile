Name = push_swap

CC = gcc

HEADERS = -I ./includes

CFLAGS = -Wall -Wextra -Werror -g3 -fPIC $(HEADERS)

SRCS := $(addprefix src/, \
	principal/main.c principal/utils.c	principal/init.c\
	push_swap_utils/parse.c	push_swap_utils/push_swap_utils.c	push_swap_utils/check.c\
	reglas/pa.c	reglas/pb.c	reglas/ra.c	reglas/rb.c  reglas/rr.c reglas/rra.c reglas/rrb.c reglas/rrr.c reglas/sa.c reglas/sb.c reglas/ss.c\
	algoritmos/sort_three.c	algoritmos/sort_four.c	algoritmos/sort_five.c	algoritmos/k_sort.c)

SRCS_LIB := $(addprefix ./libft/, \
	ft_printf.c	ft_putchar.c	ft_isdigit.c ft_putchar_fd.c	ft_substr.c ft_hexadec.c	ft_putnbr.c\
	ft_putptr.c	ft_putstr.c	ft_putnbru.c	ft_putstr_fd.c ft_split.c	ft_strlen.c\
	ft_atoi.c	ft_atol.c	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c	ft_lstclear_bonus.c\
	ft_lstlast_bonus.c	ft_lstnew_bonus.c	ft_lstsize_bonus.c	ft_sqrt.c)

OBJS = $(SRCS:.c=.o) $(SRCS_LIB:.c=.o)

$(Name): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(Name)

all: $(Name)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
