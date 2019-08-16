# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsatou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 12:13:20 by bsatou            #+#    #+#              #
#    Updated: 2019/07/17 15:13:16 by bsatou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/ft_putchar.c \
		srcs/ft_display_file.c

OBJECTS = ft_putchar.o \
			ft_display_file.o

HEADERS = includes/

all: $(NAME)

$(NAME): $(HEADERS) $(SRCS)
	@ gcc -c -Wall -Wextra -Werror $(SRCS) -I $(HEADERS)
	@ gcc $(OBJECTS) -o $(NAME)
clean:
	@ rm -f $(OBJECTS)
fclean: clean
		@ rm -f $(NAME)
