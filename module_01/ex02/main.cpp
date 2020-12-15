/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:12 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/13 12:07:41 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main()
{
	srand(time(NULL));
	Zombie z("Charles", "LOL");
	z.announce();
	
	ZombieEvent event("Witcher");
	Zombie  *z2 = event.newZombie("Eudald");
	z2->announce();
	delete z2;
	
	event.randomChump();
	event.randomChump();
	event.randomChump();
	return 0;
}