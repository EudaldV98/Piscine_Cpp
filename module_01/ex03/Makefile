# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2020/12/14 12:19:12 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = main.cpp Zombie.cpp ZombieHorde.cpp

OBJ = main.o Zombie.o ZombieHorde.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re