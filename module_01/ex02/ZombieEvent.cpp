/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:28 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/27 19:07:59 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
	setZombieType = "LOL";
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z;

	z = new Zombie(name, this->setZombieType);
	return (z);
}

ZombieEvent::~ZombieEvent()
{
}
