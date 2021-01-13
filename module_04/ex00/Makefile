# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2021/01/08 00:19:48 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymoorph

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC =  Peon.cpp Sorcerer.cpp Student.cpp Victim.cpp main.cpp

OBJ = Peon.o Sorcerer.o Student.o Victim.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
