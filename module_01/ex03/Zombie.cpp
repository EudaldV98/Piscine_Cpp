/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:17 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 11:03:54 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
	std::cout << "Object created.\n" << std::endl;
}

void		Zombie::announce()
{
	std::cout << '<' << _name << " (" << _type << ")>  Braiiiiiiinnnssss ...." << std::endl;
}

std::string	Zombie::getName()
{
	return _name;
}

std::string	Zombie::getType()
{
	return _type;
}

Zombie::~Zombie()
{
	std::cout << "No more Braiiiiiiinnnssss ...." << std::endl;
}
