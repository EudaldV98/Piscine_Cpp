/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:28 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/29 11:55:32 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <random>
#include <string>

ZombieEvent::ZombieEvent(/* args */)
{
	setZombieType = "LOL";
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z;

	z = new Zombie(name, this->setZombieType);
	return z;
}

std::string	random_str()
{
	const std::string names[5] = {"Marc", "Jean", "John", "Laure", "Marie"};

	return (names[rand() % 5]);
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *z;

	std::string rstr = random_str();
	z = new Zombie(rstr, this->setZombieType);
	z->advert();
	return z;
}

ZombieEvent::~ZombieEvent()
{
}
