/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 10:15:27 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 10:15:46 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}