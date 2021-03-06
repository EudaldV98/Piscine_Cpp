/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:43:03 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 12:45:53 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for the battle" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tm)
{
	(void)tm;
	std::cout << "Tactical Marine ready for the battle" << std::endl;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &tm)
{
	(void)tm;
	std::cout << "Tactical Marine ready for the battle." << std::endl;
	return *this;
}

ISpaceMarine *TacticalMarine::clone() const
{
    return new TacticalMarine(*this);
}

void 			TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void 			TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}
