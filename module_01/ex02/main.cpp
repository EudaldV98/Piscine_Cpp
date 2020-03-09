/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:12 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/29 11:54:59 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main()
{
    srand(time(NULL));
    Zombie z("Charles", "LOL");
    ZombieEvent event;
    z.advert();

    Zombie  *z2;
    Zombie  *z3;

    z2 = event.newZombie("Eudald");
    z3 = event.randomChump();
    z2->advert();
    delete z3;
    delete z2;
    return 0;
}