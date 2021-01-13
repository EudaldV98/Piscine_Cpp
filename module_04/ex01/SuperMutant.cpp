/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:03:03 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/11 14:19:15 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &sm): Enemy(sm.getHp(), sm.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &sm)
{
	_hp = sm.getHp();
	_type = sm.getType();
	return *this;
}

void	SuperMutant::takeDamage(int dmg)
{
	if (dmg < 3)
		dmg = 3;
	Enemy::takeDamage(dmg - 3);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}
