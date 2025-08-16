
NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utiles2.c ft_printf_utiles.c ft_printf_utiles3.c
 
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

MAIN = main
MAIN_SRC = main.c
MAIN_OBJS = $(MAIN_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(MAIN): $(NAME) $(MAIN_OBJS)
	$(CC) $(CFLAGS) $(MAIN_OBJS) $(NAME) -o $(MAIN)

run: $(MAIN)
	./$(MAIN)

clean:
	rm -f $(OBJS) &(MAIN_OBJS)

fclean: clean
	rm -f $(NAME) $(MAIN)

re: fclean all

.PHONY: all clean fclean re run
