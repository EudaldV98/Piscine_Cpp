/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:38:34 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/10 23:45:25 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(std::string name, int apcost, int damage)
	: AWeapon(name, apcost, damage)
{
}

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &p)
{
	_name = p._name;
	_apCost = p._apCost;
	_damage = p._damage;
}

PowerFist	&PowerFist::operator=(const PowerFist &p)
{
	_name = p._name;
	_damage = p._damage;
	_apCost = p._apCost;
	return *this;
}

std::string	PowerFist::getName() const
{
	return	_name;
}

int			PowerFist::getApCost() const
{
	return	_apCost;
}

int			PowerFist::getDamage() const
{
	return	_damage;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
}
