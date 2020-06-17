/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:47:24 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 19:01:06 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	HP = hp;
	Type = type;
}

std::string	Enemy::getType() const
{
	return Type;
}

int		Enemy::getHP() const
{
	return HP;
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return;
	HP = (HP < 0) ? HP : HP -= dmg;
}

Enemy::~Enemy()
{
}
