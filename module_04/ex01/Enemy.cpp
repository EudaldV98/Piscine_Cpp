/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:47:24 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/11 00:13:51 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type)
{
	_hp = hp;
	_type = type;
}

Enemy::Enemy(const Enemy &e)
{
	_hp = e.getHp();
	_type = e.getType();
}

std::string	Enemy::getType() const
{
	return _type;
}

int		Enemy::getHp() const
{
	return _hp;
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return;
	_hp = (_hp < 0) ? _hp : _hp -= dmg;
}

Enemy	&Enemy::operator=(const Enemy &e)
{
	_hp = e._hp;
	_type = e._type;
	return *this;
}

Enemy::~Enemy()
{
}
