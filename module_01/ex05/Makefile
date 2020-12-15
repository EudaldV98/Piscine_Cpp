# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2020/12/14 18:02:06 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = main.cpp Human.cpp Brain.cpp

OBJ = main.o  Human.o Brain.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re