NAME = libftprintf.a

SRCS = ft_putstr.c \
	   ft_putnbr.c \
	   ft_puthex.c \
	   ft_putptr.c \
	   ft_printf.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

HEADER_DIR=ft_printf.h

CC=cc

CFLAGS=-Wall -Werror -Wextra -I $(HEADER_DIR)

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
