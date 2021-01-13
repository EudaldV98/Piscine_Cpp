/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 21:39:20 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/10 13:42:49 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
	_name = name;
	_apCost = apcost;
	_damage = damage;
}

AWeapon::AWeapon(const AWeapon &w)
{
	_name = w.getName();
	_apCost = w.getAPCost();
	_damage = w.getDamage();
}

const std::string &AWeapon::getName() const
{
	return _name;
}

int		AWeapon::getAPCost() const
{
	return _apCost;
}

int		AWeapon::getDamage() const
{
	return _damage;
}

AWeapon	&AWeapon::operator=(const AWeapon &w)
{
	_name = w.getName();
	_apCost = w.getAPCost();
	_damage = w.getDamage();
	return *this;
}

void	AWeapon::attack() const
{
	std::cout << "Ratatatatatata!!!" << std::endl;
}

AWeapon::~AWeapon()
{
}
