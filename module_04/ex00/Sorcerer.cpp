/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 11:58:52 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/14 23:31:57 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	Name  = name;
	Title = title;
	std::cout << Name << ", " << Title << " is born!" << std::endl;
}

const std::string &Sorcerer::getName() const
{
	return this->Name;
}

const std::string &Sorcerer::getTitle() const
{
	return this->Title;
}

void	Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << Name << ", " << Title <<  ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Sorcerer &s)
{
	return out << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
}
