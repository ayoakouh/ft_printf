CC =	cc
CFLAGS = 	-Wall -Wextra -Werror


SRCS =  ft_print_hexa_X.c ft_print_hx_x.c ft_putstr.c \
       ft_putchar.c ft_putnbr.c  format_u.c\
	   fotmat_p.c put_hxaddres.c ft_printf.c
OBJS = $(SRCS:.c=.o)


NAME = libftprintf.a


all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $^

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
