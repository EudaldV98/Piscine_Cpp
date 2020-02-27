/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:17 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/27 19:08:27 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type)
{
	name = _name;
	type = _type;
	std::cout << "Object created.\n" << std::endl;
}

void	Zombie::advert()
{
	std::cout << '<' << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss ....\n" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Object destroyed." << std::endl;
}
