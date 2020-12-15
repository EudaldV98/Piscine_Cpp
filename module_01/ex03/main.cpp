/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:12 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/14 11:39:29 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

int main()
{
    srand(time(NULL));
    Zombie zb("Jonny", "Ground");
    zb.announce();

    ZombieHorde horde(5);
    horde.announce();
}