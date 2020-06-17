/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:31:49 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 19:51:23 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	Name = name;
	AP = 40;
	Weapon = NULL;
}

void	Character::recoverAP()
{
	AP += 10;
	AP = (AP > 40) ? 40 : AP;
}

Character::~Character()
{
}
