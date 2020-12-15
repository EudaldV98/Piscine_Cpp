/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:28 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 11:00:05 by jvaquer          ###   ########.fr       */
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
	return new Zombie(name, _type);
}

std::string	random_str(void)
{
	const std::string names[5] = {"Marc", "Jean", "John", "Laure", "Marie"};

	return (names[rand() % 5]);
}

void		ZombieEvent::randomChump(void)
{
	Zombie z(random_str(), _type);
	z.announce();
}

void		ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

std::string	ZombieEvent::getType(void)
{
	return _type;
}

ZombieEvent::~ZombieEvent(void)
{
}
