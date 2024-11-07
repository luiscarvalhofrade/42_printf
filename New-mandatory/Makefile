# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 13:33:19 by luide-ca          #+#    #+#              #
#    Updated: 2024/11/07 13:33:20 by luide-ca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# compiler
CC = gcc

# compiler flags
CFLAGS = -Wall -Werror -Werror -I .

# source flags 
SRCS = ft_printf.c ft_itoa_base_pf.c ft_itoa_pf.c ft_itoa_unsigned_pf.c \
	ft_convert_ptr_pf.c ft_putchar_pf.c ft_putstr_pf.c

# object flags
OBJECTS = $(SRCS:.c=.o)

# library name
NAME = libftprintf.a

# rules
all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)
	@echo "Object files cleaned."

fclean:
	@rm -f $(NAME) $(OBJECTS)
	@echo "Library cleaned."

re: fclean all

.PHONY: all clean fclean re
