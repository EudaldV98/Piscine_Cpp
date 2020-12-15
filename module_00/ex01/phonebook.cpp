/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:26:31 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/12 12:11:05 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::ft_add()
{
	std::cout << "What's your name?" << std::endl;
	getline(std::cin, this->_first_name);
	std::cout << "What's your last name?" << std::endl;
	getline(std::cin, this->_last_name);
	std::cout << "What's your nick name?" << std::endl;
	getline(std::cin, this->_nickname);
	std::cout << "What's your login?" << std::endl;
	getline(std::cin, this->_login);
	std::cout << "What's your Postal address?" << std::endl;
	getline(std::cin, this->_postal_address);
	std::cout << "What's your e-mail address?" << std::endl;
	getline(std::cin, this->_mail);
	std::cout << "What's your phone number?" << std::endl;
	getline(std::cin, this->_phone);
	std::cout << "What's your birth date?" << std::endl;
	getline(std::cin, this->_birth);
	std::cout << "What's your favorite meal?" << std::endl;
	getline(std::cin, this->_meal);
	std::cout << "What's your underwear color?" << std::endl;
	getline(std::cin, this->_underwear);
	std::cout << "What's your darkest secret?" << std::endl;
	getline(std::cin, this->_dark);
}

void	ft_print_data(std::string toPrint)
{
	int		i;

	if (toPrint.length() > 10)
	{
		i = -1;
		while (++i < 9)
			std::cout << toPrint[i];
		std::cout << '.' << " | ";
	}
	else
	{
		i = 10 - toPrint.length();
		while (i-- > 0)
			std::cout << ' ';
		std::cout << toPrint << " | ";
	}
}

void	PhoneBook::ft_print_user(PhoneBook book)
{
	std::cout << "First name : " <<  book._first_name << std::endl;
	std::cout << "Last name : " <<  book._last_name << std::endl;
	std::cout << "Nick name : " <<  book._nickname << std::endl;
	std::cout << "Login : " <<  book._login << std::endl;
	std::cout << "Postal address : " <<  book._postal_address << std::endl;
	std::cout << "Email : " <<  book._mail << std::endl;
	std::cout << "Phone number : " <<  book._phone << std::endl;
	std::cout << "Birthday date : " <<  book._birth << std::endl;
	std::cout << "Favorite meal : " <<  book._meal << std::endl;
	std::cout << "Underwear color : " <<  book._underwear << std::endl;
	std::cout << "Darkest secret : " <<  book._dark << std::endl;
}

void	PhoneBook::ft_search(PhoneBook book[], const int i)
{
	int				j;
	int				k;
	PhoneBook		tmp[8];
	std::string		buf;
	j = -1;
	k = 0;
	while (++j < i)
	{
		std::cout << k << "|";
		ft_print_data(book[j]._first_name);
		ft_print_data(book[j]._last_name);
		ft_print_data(book[j]._login);
		std::cout << "\n";
		tmp[k] = book[j];
		k++;
	}
	if (k-- > 0)
	{
		while (buf.size() != 1 || buf[0] > k + '0' || buf[0] < '0')
		{
			std::cout << "Type the INDEX of the contact you want to read (0-7).\n";
			getline(std::cin, buf);
			if (buf.size() == 1 && buf[0] <= k + '0' && buf[0] >= '0')
			{
				ft_print_user(tmp[buf[0] - '0']);
				return ;
			}
			else
				std::cout << "Please enter a right INDEX\n";
		}
	}
}
