# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 15:45:20 by jvaquer           #+#    #+#              #
#    Updated: 2020/02/26 15:45:32 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = megaphone.cpp

OBJ = megaphone.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
