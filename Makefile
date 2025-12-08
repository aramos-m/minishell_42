NAME    = minishell

# Rutas correctas según tu estructura de carpetas
SRCS    = src/minishell.c src/executor.c src/signals.c src/utils.c src/builtins/echo.c src/

OBJS    = $(SRCS:.c=.o)

CC      = cc
CFLAGS  = -Wall -Wextra -Werror -g -Iincludes
# -Iincludes es importante para que encuentre minishell.h y signals.h

# Librería readline (necesaria para minishell)
LIBS    = -lreadline

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re