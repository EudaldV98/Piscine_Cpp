/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:03:03 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 19:11:05 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
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
