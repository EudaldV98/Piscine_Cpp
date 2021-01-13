/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LaserKatana.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:36:34 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 03:25:55 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LaserKatana.hpp"

LaserKatana::LaserKatana(std::string name, int apcost, int damage): AWeapon(name, apcost, damage)
{
}

LaserKatana::LaserKatana(): AWeapon("LaserKatana", 3, 18)
{
}

LaserKatana::LaserKatana(const LaserKatana &lp)
{
	_name = lp.getName();
	_apCost = lp.getApCost();
	_damage = lp.getDamage();
}

LaserKatana	&LaserKatana::operator=(const LaserKatana &lp)
{
	_name = lp.getName();
	_apCost = lp.getApCost();
	_damage = lp.getDamage();
	return *this;
}

std::string	LaserKatana::getName() const
{
	return	_name;
}

int			LaserKatana::getDamage() const
{
	return	_damage;
}

int			LaserKatana::getApCost() const
{
	return	_apCost;
}

void		LaserKatana::attack() const
{
	std::cout << "* zzzzooom slash zoooom *" << std::endl;
}

LaserKatana::~LaserKatana()
{
}
