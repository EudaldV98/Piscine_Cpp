/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:25:44 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/09 23:53:10 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main(int ac, char **av)
{
	std::string	buf;
	PhoneBook	book[8];
	int			i;

	i = 0;
	std::cout << "Hi, Welcome to the PhoneBook.\nType ADD to add a contact or SEARCH to search a contact.\nType EXIT to quit the program.\n" << std::endl;
	while (buf.compare("EXIT"))
	{
		getline(std::cin, buf);
		if (buf.compare("ADD") == 0)
		{
			if (i < 8)
				book[i++].ft_add();
			else
				std::cout << "\nTHE BOOK IS FULL!" << std::endl;
		}
		else if (buf.compare("SEARCH") == 0)
			book[i].ft_search(book, i);
		if (buf.compare("EXIT"))
			std::cout << "\nType ADD to add a contact or SEARCH to search a contact.\nType EXIT to quit the program.\n" << std::endl;
	}
	return 0;
}