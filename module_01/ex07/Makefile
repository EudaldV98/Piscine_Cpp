# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 00:04:26 by jvaquer           #+#    #+#              #
#    Updated: 2020/05/04 23:34:35 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
OBJECTS=replace.o
NAME=replace

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS)  $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all