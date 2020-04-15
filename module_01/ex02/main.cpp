/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:12 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/15 13:58:37 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main()
{
    srand(time(NULL));
    Zombie z("Charles", "LOL");
    ZombieEvent event("Witcher");
    z.advert();
    Zombie  *z2;

    z2 = event.newZombie("Eudald");
    event.randomChump();
    z2->advert();
    delete z2;
    return 0;
}