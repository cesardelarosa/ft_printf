CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_strlen.c ft_itoa.c ft_putchar.c ft_printf.c ft_utoa.c \
	ft_puthex_upper.c ft_itoa_base.c ft_puthex.c ft_putnbr.c \
	ft_putstr.c ft_putptr.c ft_putabs.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
