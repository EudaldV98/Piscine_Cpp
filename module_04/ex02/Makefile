# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2021/01/13 13:15:28 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Marines 

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = 	AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp main.cpp

OBJ =	AssaultTerminator.o Squad.o TacticalMarine.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
