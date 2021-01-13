/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 19:37:13 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/16 21:18:54 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

const std::string &Victim::getName() const
{
	return _name;
}

void	Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

Victim	&Victim::operator=(const Victim&v)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
	_name = v._name;
	std::cout << "Some random victim called " << _name << " just popped!" << std::endl;
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Victim &v)
{
	return out << "I am " << v.getName() << " and I like otters!" << std::endl;
}
