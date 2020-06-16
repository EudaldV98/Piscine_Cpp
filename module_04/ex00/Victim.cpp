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
	Name = name;
	std::cout << "Some random victim called " << this->Name << " just appeared!" << std::endl;
}

const std::string &Victim::getName() const
{
	return this->Name;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->Name << " has been turned into a cute little sheep!" << std::endl;
}

Victim	&Victim::operator=(const Victim&v)
{
	std::cout << "Victim " << Name << " just died for no apparent reason!" << std::endl;
	Name = v.Name;
	std::cout << "Some random victim called " << Name << " just popped!" << std::endl;
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->Name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Victim &v)
{
	return out << "I am " << v.getName() << " and I like otters!" << std::endl;
}
