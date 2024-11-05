# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 16:17:00 by luide-ca          #+#    #+#              #
#    Updated: 2024/10/29 16:17:01 by luide-ca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# compiler
CC = gcc

# compiler flags
CFLAGS = -Wall -Werror -Werror -I .

# source flags 
SRCS = ft_printf.c ft_itoa_count.c ft_itoa_hexadec_count.c ft_itoa_unsigned_count.c \
	ft_print_void_count.c ft_putchar_count.c ft_putstr_count.c

# object flags
OBJECTS = $(SRCS:.c=.o)

# library name
NAME = libftprintf.a

# rules
all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)
	@echo "Object files cleaned."

fclean:
	@rm -f $(NAME)
	@echo "Library cleaned."

re: fclean all

.PHONY: all clean fclean re
