/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 21:39:20 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 17:50:50 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
	Name = name;
	APCost = apcost;
	Damage = damage;
}

const std::string &AWeapon::getName() const
{
	return Name;
}

int		AWeapon::getAPCost() const
{
	return APCost;
}

int		AWeapon::getDamage() const
{
	return Damage;
}

AWeapon::~AWeapon()
{
}
