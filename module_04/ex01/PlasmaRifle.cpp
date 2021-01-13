/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 17:59:26 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/10 19:16:35 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(std::string name, int apcost, int damage)
			: AWeapon(name, apcost, damage)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &p)
{
	_name = p.getName();
	_apCost = p.getApCost();
	_damage = p.getDamage();
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &p)
{
	_name = p.getName();
	_apCost = p.getApCost();
	_damage = p.getDamage();
	return *this;
}

std::string	PlasmaRifle::getName() const
{
	return _name;
}

int			PlasmaRifle::getDamage() const
{
	return _damage;
}

int			PlasmaRifle::getApCost() const
{
	return _apCost;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
}
