/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:44:32 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 13:00:25 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &at)
{
	(void)at;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &at)
{
	(void)at;
	std::cout << "* teleports from space *" << std::endl;
	return (*this);
}

ISpaceMarine *AssaultTerminator::clone() const
{
    return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back ..." << std::endl;
}
