/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:12:23 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/22 12:56:11 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <string>

struct Data
{
	std::string s1;
	int			n;
	std::string	s2;
};

void		*serialize(void)
{
	char	*serial = new char[20];
	char	alnum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTYVWXYZ0123456789";
	int		i;
	int		j;
	
	i = 0;
	while (i < 8)
		serial[i++] = alnum[rand() % (sizeof(alnum) - 1)];
	serial[i++] = rand() % 10 + '0';
	j = 0;
	while (j < 8)
		serial[i + j++] = alnum[rand() % (sizeof(alnum) - 11)];
	serial[i + j] = 0;
	return	serial;
}

Data			*deserialise(void *raw)
{
	Data		*data = new Data;
	std::string _raw;
	char		tmp[9];

	_raw = (char *)raw;
	data->n = _raw[8] - '0';
	_raw.copy(tmp, 8, 0);
	tmp[8] = 0;
	data->s1 = tmp;
	_raw.copy(tmp, 8, 9);
	tmp[8] = 0;
	data->s2 = tmp;
	return	data;
}

int				main(void)
{
	void			*test;
	std::string		serialized;
	Data			*data;

	srand(time(NULL));

	std::cout << "Serialized part :" << std::endl;
	test = serialize();
	serialized = (char *)test;
	std::cout << "\tFull serialized output : " << serialized << std::endl;
	std:: cout << "\tFirst block : " << serialized.substr(0, 8) << std::endl;
	std:: cout << "\tNumber : " << serialized.substr(8, 1) << std::endl;
	std:: cout << "\tSecond block : " << serialized.substr(9, 8) << std::endl;

	std::cout << "\nDeserialized part :" << std::endl;
	data = deserialise(test);
	std::cout  << "\ts1 : " << data->s1 << std::endl;
	std::cout << "\tn  : " << data->n << std::endl;
	std::cout << "\ts2 : " << data->s2 << std::endl;

	return (0);
}
