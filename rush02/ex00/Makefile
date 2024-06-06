# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 19:55:55 by hbutt             #+#    #+#              #
#    Updated: 2024/02/25 21:34:52 by hbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
CC = gcc
CFLAGS = -Wall -Werror -Wextra

$(NAME):
	$(CC) $(CFLAGS) *.c -o $(NAME)

all:
	$(CC) $(CFLAGS) *.c -o $(NAME)

clean:
	rm -f *.o
fclean:
	rm -f $(NAME)
re : fclean all
