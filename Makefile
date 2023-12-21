NAME	= libftprintf.a

SRCS	= ft_putchar_len.c ft_putstr_len.c ft_print_int.c ft_print_uint.c\
			ft_print_addr.c ft_print_hex.c ft_printf.c\

OBJS	= $(SRCS:.c=.o)

CC		= gcc

GFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c 
		$(CC) $(GFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re