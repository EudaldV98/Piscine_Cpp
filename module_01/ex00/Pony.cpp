/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:03:55 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/27 18:49:16 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int _age, int _height, int _weight, std::string _name)
{
	age = _age;
	height = _height;
	weight = _weight;
	name = _name;
	hp = 50;
	lvl = 1;
	dmg = 5;
	def = 2;
	std::cout << "Object created.\n" << std::endl;
}

void	Pony::upgrade()
{
	this->lvl += 1;
	this->hp += rand() % 5 + 5;
	this->dmg += rand() % 5 + 1;
	this->def += rand() % 5 + 1;
}

void	Pony::print_stats()
{
	std::cout << "Hp:  " << this->hp << "." << std::endl;
	std::cout << "Dmg: " << this->dmg << "." << std::endl;
	std::cout << "Def: " << this->def << "." << std::endl;
	std::cout << "Lvl: " << this->lvl << ".\n" << std::endl;
}

void	Pony::print_data()
{
	std::cout << "Name:   " << this->name << "." << std::endl;
	std::cout << "Age:    " << this->age << "." << std::endl;
	std::cout << "Weight: " << this->weight << "." << std::endl;
	std::cout << "Height: " << this->height << ".\n" << std::endl;  
}

void	Pony::attack(Pony &target)
{
	target.hp -= this->dmg - target.def;
	std::cout << this->name << " attacked " << target.name << "!." << std::endl;
	std::cout << '[' << target.name << "] current hp: [" << target.hp << "]." << std::endl; 
}

Pony::~Pony()
{
	std::cout << "Object destroyed." << std::endl;
}
