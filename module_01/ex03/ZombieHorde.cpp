/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 13:23:49 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/15 14:15:15 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	random_str()
{
	const std::string names[5] = {"Marc", "Jean", "John", "Laure", "Marie"};

	return (names[rand() % 5]);
}

ZombieHorde::ZombieHorde(const int n) : _n(n)
{
    _zombies = new Zombie[n];
    for (size_t i = 0; i < n; i++)
        _zombies[i] = Zombie(random_str(), "Horde Z");
    
}

void    ZombieHorde::announce()
{
    for (size_t i = 0; i < _n; i++)
        _zombies[i].advert();
}

ZombieHorde::~ZombieHorde()
{
    delete[] _zombies;
}
