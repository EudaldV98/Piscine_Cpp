# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:25:58 by jvaquer           #+#    #+#              #
#    Updated: 2021/01/19 12:54:16 by jvaquer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Bureaucrat

C++ =	clang++

FLAG =	-Wall -Werror -Wextra

SRC =	Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp main.cpp 

OBJ =	Bureaucrat.o Form.o ShrubberyCreationForm.o PresidentialPardonForm.o RobotomyRequestForm.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
