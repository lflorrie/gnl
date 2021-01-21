# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/30 21:19:17 by lflorrie          #+#    #+#              #
#    Updated: 2020/12/30 21:19:19 by lflorrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Wextra -Werror

NAME=get_next_line.a

SRC=get_next_line.c \
	get_next_line_utils.c

%o.:%.c
	gcc -c $(CFLAGS) $< -o $@

NAME:

all: $(NAME)

test:
	gcc $(FLAGS) -D BUFFER_SIZE=7 $(SRC) main.c
clean:
	rm -rf $(OBJ)

fclean:clean

.PHONY: all clean fclean re