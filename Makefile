# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/08 21:29:49 by aramos-m          #+#    #+#              #
#    Updated: 2025/12/08 21:29:49 by aramos-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = minishell

LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

SRCS        = src/main.c \
              src/executor.c \
              src/signals.c \
              src/utils.c \
              src/env.c \
              src/builtins/echo.c 

OBJS        = $(SRCS:.c=.o)

CC          = cc
# Flags de compilación. 
# -Iincludes: busca headers en la carpeta includes/
# -I$(LIBFT_DIR): busca headers en libft/ (necesario para libft.h)
CFLAGS      = -Wall -Wextra -Werror -g -Iincludes -I$(LIBFT_DIR)

# Librerías para el enlazado (Linker)
# -lreadline: librería readline del sistema
# -L$(LIBFT_DIR) -lft: mi libft
LIBS        = -lreadline -L$(LIBFT_DIR) -lft

all: $(NAME)

# Regla principal: Crea el ejecutable
# Depende de $(LIBFT) y $(OBJS) para asegurar que existan antes de enlazar
$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

# Regla implícita para compilar archivos .c a .o individualmente
# Es necesaria para que make sepa cómo construir los objetos si cambian los .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para compilar la libft llamando a su propio Makefile
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
