# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2020/12/13 11:51:46 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SuperTrap

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC =  FragTrap.cpp main.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp SuperTrap.cpp

OBJ = FragTrap.o main.o ScavTrap.o ClapTrap.o NinjaTrap.o SuperTrap.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
