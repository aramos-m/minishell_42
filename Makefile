NAME    	= minishell

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

# Rutas correctas según tu estructura de carpetas
SRCS    = src/minishell.c src/executor.c src/signals.c src/utils.c src/builtins/echo.c src/

OBJS    = $(SRCS:.c=.o)

CC      = cc
CFLAGS  = -Wall -Wextra -Werror -g -Iincludes -I$(LIBFT_DIR)
# -Iincludes es importante para que encuentre minishell.h y signals.h

# Librería readline (necesaria para minishell)
LIBS    = -lreadline -L$(LIBFT_DIR) -lft

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re