NAME = push_swap
BONUS_NAME = checker

CC = cc
HEADERS = -I ./includes
CFLAGS = -Wall -Wextra -Werror $(HEADERS) #-g3 -fPIC

SRCS := $(addprefix src/, \
	push_swap_utils.c list_revise.c algorithms.c k_sort.c\
	main/main.c\
	parse/parse.c parse/check_num_array.c\
	reglas/pa.c	reglas/pb.c	reglas/ra.c	reglas/rb.c  reglas/rr.c reglas/rra.c reglas/rrb.c reglas/rrr.c reglas/sa.c reglas/sb.c reglas/ss.c)

SRCS_LIB := $(addprefix ./libft/, \
	ft_printf.c ft_printf_utils.c	ft_putchar.c	ft_isdigit.c ft_putchar_fd.c	ft_substr.c ft_hexadec.c	ft_putnbr.c\
	ft_putptr.c	ft_putstr.c	ft_putnbru.c	ft_putstr_fd.c ft_split.c	ft_strlen.c ft_memcpy.c\
	ft_atoi.c	ft_atol.c	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c	ft_lstclear_bonus.c\
	ft_lstlast_bonus.c	ft_lstnew_bonus.c	ft_lstsize_bonus.c	ft_sqrt.c ft_calloc.c ft_is_sing.c\
	ft_strchr.c ft_strjoin.c ft_strncmp.c get_next_line_bonus.c)

BONUS_DIR = src_bonus
BONUS_SRC = $(addprefix $(BONUS_DIR)/, main_bonus.c comprove.c)
BONUS_SRCS = $(filter-out src/main/main.c, $(SRCS)) $(BONUS_SRC)

OBJS = $(SRCS:.c=.o) $(SRCS_LIB:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o) $(SRCS_LIB:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(BONUS_OBJS) -o $(BONUS_NAME)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus
