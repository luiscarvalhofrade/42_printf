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
SRCS = ft_printf.c ft_itoa_hex.c ft_utils.c ft_itoa.c ft_itoa_unsigned.c ft_itoa_ptr.c ft_trans.c

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
