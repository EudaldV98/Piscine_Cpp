/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:28 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/22 20:16:11 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <random>
#include <string>

ZombieEvent::ZombieEvent(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->_type);
}

std::string	random_str()
{
	const std::string names[5] = {"Marc", "Jean", "John", "Laure", "Marie"};

	return (names[rand() % 5]);
}

void	ZombieEvent::randomChump()
{
	Zombie z(random_str(), this->_type);
	z.announce();
}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

ZombieEvent::~ZombieEvent()
{
}
