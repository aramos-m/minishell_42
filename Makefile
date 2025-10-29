NAME        = minishell

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g -Iincludes
RM          = rm -f

SRC         = src/executor.c \
              src/utils.c \
              src/builtins/echo.c

OBJ         = $(SRC:.c=.o)

LIBS        = -lreadline

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re