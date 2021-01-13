/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UltraMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:21:45 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/12 23:35:10 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UltraMutant.hpp"

UltraMutant::UltraMutant(): Enemy(200, "Ultra Mutant")
{
	std::cout << "Roaaaaar!!! Who wants fight?!" << std::endl;
}

UltraMutant::UltraMutant(const UltraMutant &um): Enemy(um.getHp(), um.getType())
{
	std::cout << "Roaaaaar!!! Who wants fight?!" << std::endl;
}

UltraMutant	&UltraMutant::operator=(const UltraMutant &um)
{
	_hp = um.getHp();
	_type = um.getType();
	return *this;
}

void		UltraMutant::takeDamage(int dmg)
{
	if (dmg < 3)
		dmg = 3;
	Enemy::takeDamage(dmg - 3);
}

UltraMutant::~UltraMutant()
{
	std::cout << "Aaargh..." << std::endl;
}
