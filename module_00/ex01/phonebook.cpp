/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:26:31 by jvaquer           #+#    #+#             */
/*   Updated: 2020/11/29 10:08:16 by jvaquer          ###   ########.fr       */
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
	std::cout << "What's your Postal address?" << std::endl;
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
	getline(std::cin, this->dark);
}

int		PhoneBook::ft_find(PhoneBook book, std::string buf)
{
	size_t		len;

	len = -1;
	while (++len < book.first_name.length())
		if (book.first_name.compare(len, buf.size(), buf) == 0)
			return (1);
	len = -1;
	while (++len < book.last_name.length())
		if (book.last_name.compare(len, buf.size(), buf) == 0)
			return (1);
	len = -1;
	while (++len < book.login.length())
		if (book.login.compare(len, buf.size(), buf) == 0)
			return (1);
	return (0);
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
	std::cout << "First name : " <<  book.first_name << std::endl;
	std::cout << "Last name : " <<  book.last_name << std::endl;
	std::cout << "Nick name : " <<  book.nickname << std::endl;
	std::cout << "Login : " <<  book.login << std::endl;
	std::cout << "Postal address : " <<  book.postal_address << std::endl;
	std::cout << "Email : " <<  book.mail << std::endl;
	std::cout << "Phone number : " <<  book.phone << std::endl;
	std::cout << "Birthday date : " <<  book.birth << std::endl;
	std::cout << "Favorite meal : " <<  book.meal << std::endl;
	std::cout << "Underwear color : " <<  book.underwear << std::endl;
	std::cout << "Darkest secret : " <<  book.dark << std::endl;
}

void	PhoneBook::ft_search(PhoneBook book[], const int i)
{
	int				k;
	int				index;
	PhoneBook		tmp[8];
	std::string		buf;
	std::string		buf2;
	std::cout << "Who do you want find ?\n";
	getline(std::cin, buf);
	k = -1;
	index = 0;
	while (++k < i)
		if (ft_find(book[k], buf) == 1)
		{
			std::cout << index << "|";
			ft_print_data(book[k].first_name);
			ft_print_data(book[k].last_name);
			ft_print_data(book[k].login);
			std::cout << "\n";
			tmp[index] = book[k];
			index++;
		}
	if (index-- > 0)
	{
		while (buf2.size() != 1 || buf2[0] > index + '0' || buf2[0] < '0')
		{
			std::cout << "Type the INDEX of the contact you want to read (0-7).\n";
			getline(std::cin, buf2);
			if (buf2.size() == 1 && buf2[0] <= index + '0' && buf2[0] >= '0')
			{	
				ft_print_user(tmp[buf2[0] - '0']);
				return ;
			}
			else
				std::cout << "Please enter a right INDEX\n";
		}
	}
}
