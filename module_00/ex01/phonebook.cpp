/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:26:31 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/26 18:10:25 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::ft_add()
{
	std::cout << "What's your name?" << std::endl;
	getline(std::cin, this->first_name);
	std::cout << "What's your last name?" << std::endl;
	getline(std::cin, this->last_name);
	std::cout << "What's your nick name?" << std::endl;
	getline(std::cin, this->nickname);
	std::cout << "What's your login?" << std::endl;
	getline(std::cin, this->login);
/*	std::cout << "What's your Postal address?" << std::endl;
	getline(std::cin, this->postal_address);
	std::cout << "What's your e-mail address?" << std::endl;
	getline(std::cin, this->mail);
	std::cout << "What's your phone number?" << std::endl;
	getline(std::cin, this->phone);
	std::cout << "What's your birth date?" << std::endl;
	getline(std::cin, this->birth);
	std::cout << "What's your favorite meal?" << std::endl;
	getline(std::cin, this->meal);
	std::cout << "What's your underwear color?" << std::endl;
	getline(std::cin, this->underwear);
	std::cout << "What's your darkest secret?" << std::endl;
	getline(std::cin, this->dark);*/
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

void	PhoneBook::ft_search(PhoneBook book[], const int i)
{
	int			j;
	int			x;
	int			input;
	PhoneBook	found[8];
	int			y;
	std::string	buf;

	std::cout << "What would you like to find?" << std::endl;
	getline(std::cin, buf);
	j= 0;
	x = 0;
	y = 0;
	while (j < i)
	{
		if (book[j].first_name.compare(0, buf.size(), buf) == 0 ||
			book[j].last_name.compare(0, buf.size(), buf) == 0 ||
			book[j].login.compare(0, buf.size(), buf) == 0)
			{
				std::cout << x << " | ";
				ft_print_data(book[j].first_name);
				ft_print_data(book[j].last_name);
				ft_print_data(book[j].login);
				std::cout << '\n';
				found[y] = book[j];
				y++;
				x++;
			}
		j++;
	}
	std::cout << std::endl;
	buf = "";
	if (x == 0)
		return ;
	std::cout << "Type the INDEX of the contact you want to read (1-8)\n" << std::endl;
	while (input > x || input < '0' || buf.size() != 1)
	{
		getline(std::cin, buf);
		input = buf[0] - '0';
		std::cout << found[input].first_name << std::endl;
		std::cout << found[input].last_name << std::endl;
		std::cout << found[input].nickname << std::endl;
		std::cout << found[input].login << std::endl;
		std::cout << found[input].postal_address;
		std::cout << found[input].mail;
		std::cout << found[input].phone;
		std::cout << found[input].birth;
		std::cout << found[input].meal;
		std::cout << found[input].underwear;
		std::cout << found[input].dark;
	}
}
