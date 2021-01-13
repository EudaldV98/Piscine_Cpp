# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2021/01/13 03:19:12 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC =  AWeapon.cpp Character.cpp Enemy.cpp main.cpp PlasmRifle.cpp PowerFist.cpp \
	   RadScorpion.cpp SuperMutant.cpp UltraMutant.cpp LaserKatana.cpp

OBJ = AWeapon.o Character.o Enemy.o main.o PlasmaRifle.o PowerFist.o RadScorpion.o \
	  SuperMutant.o UltraMutant.o LaserKatana.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
