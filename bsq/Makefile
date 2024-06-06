# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alama <alama@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 14:49:25 by alama             #+#    #+#              #
#    Updated: 2024/02/28 22:56:33 by alama            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = main.c copy_map.c copy_map_part_2.c prog.c print_tab.c ft_verrif.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
$(OBJ) :
	$(CC) $(CFLAGS) -c $(@:.o=.c) 

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)


re : fclean $(NAME)
