/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:26:05 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/11 14:18:42 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &rs): Enemy(rs.getHp(), rs.getType())
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &rs)
{
	_hp = rs._hp;
	_type = rs._type;
	return	*this;
}

void			RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
