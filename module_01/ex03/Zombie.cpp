/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:17 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/22 20:14:51 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string _name, std::string _type)
{
	name = _name;
	type = _type;
	std::cout << "Object created.\n" << std::endl;
}

void	Zombie::announce()
{
	std::cout << '<' << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss ....\n" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Object destroyed.\n" << std::endl;
}
