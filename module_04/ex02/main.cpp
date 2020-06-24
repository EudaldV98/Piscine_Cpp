/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 20:09:24 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/24 12:05:27 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad* vlc = new Squad();
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	ISquad *vlc2 = new Squad();
	std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;
    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;
    for (int i = 0; i < vlc2->getCount(); ++i)
    {
		std::cout << "TROOP No: " << i << "." << std::endl;
        ISpaceMarine *cur = vlc2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete vlc2;
	return 0;
}