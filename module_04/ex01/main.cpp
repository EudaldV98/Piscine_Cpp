/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 20:47:49 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 11:39:22 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "UltraMutant.hpp"
#include "LaserKatana.hpp"

#include <iostream>

int main()
{
    Character* me = new Character("me");
    std::cout << *me;

	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();
	Enemy* c = new UltraMutant();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* lk = new LaserKatana();
	
	me->equip(pr);
    std::cout << *me;
   
	me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    while (c->getHp() > 0)
	{
		if (me->getAP() < pr->getAPCost())
			me->recoverAP();
		me->attack(c);
		std::cout << *me;
	}
   	me->recoverAP();
	me->recoverAP();
   	me->recoverAP();
	me->recoverAP();
	me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
	me->equip(lk);
	std::cout << *me;
	me->attack(a);
	return 0;
}
