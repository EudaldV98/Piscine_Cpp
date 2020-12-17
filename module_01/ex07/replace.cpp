/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 00:04:44 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 12:17:49 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int		instructions(void)
{
	std::cout << "Please enter 3 arguments: <file> <find> <replace>." << std::endl;
	return (1);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return instructions();
	std::string file = av[1];
	std::string find = av[2];
	std::string replace = av[3];
	if  (!file.length() || !find.length() || !replace.length())
		return instructions();
	
	std::fstream in, out;
	in.open(file.c_str(), std::fstream::in);
	if (!in)
	{
		std::cout << "File does not exists." << std::endl;
		return 1;
	}
	out.open((file + ".replace").c_str(), std::fstream::out);
	if (!out)
	{
		in.close();
		std::cout << "I/O Error." << std::endl;
		return 1;
	}
	
	std::string::size_type findlen = find.length();
	char *queue = new char[findlen];
	std::string::size_type index = 0;
	std::string::size_type len = 0;
	while (!in.eof())
	{
		if (!in.read(&queue[index], 1))
			break;
		len++;
		if (len == findlen)
		{
			bool found = true;
			for(std::string::size_type i = 0; i < findlen; i++)
			{
				if (queue[(index + i + 1) % findlen] != find[i])
				{
					found = false;
					break;
				}
			}
			if (found)
			{
				len = 0;
				out << replace;
				index = (index + 1) % findlen;
			}
			else
			{
				out << queue[(index + 1) % findlen];
				len--;
			}
		}
		index = (index + 1) % findlen;
	}
	while (len > 0)
	{
		out << queue[(index + 1) % findlen];
		len--;
		index = (index + 1) % findlen;
	}
	//delete queue;
	in.close();
	out.close();
	return 0;
}
