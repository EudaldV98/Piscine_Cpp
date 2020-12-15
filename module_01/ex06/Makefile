# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2020/12/15 10:49:47 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = main.o HumanA.o HumanB.o Weapon.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re