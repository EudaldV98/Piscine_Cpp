/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:03:55 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/14 10:33:42 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int age, int height, int weight, std::string name)
{
	_age = age;
	_height = height;
	_weight = weight;
	_name = name;
	_cap = 100;
	std::cout << "Object created.\n" << std::endl;
}

void	Pony::print_data()
{
	std::cout << "Name:   " << this->_name << "." << std::endl;
	std::cout << "Age:    " << this->_age << "." << std::endl;
	std::cout << "Weight: " << this->_weight << "." << std::endl;
	std::cout << "Height: " << this->_height << "." << std::endl;
	std::cout << "Energy: " << this->_cap << ".\n" << std::endl;
}

void	Pony::eat(std::string s)
{
	if (this->_cap > 0)
	{
		std::cout << this->_name << " is eating " << s << ". Mmmm..." << this->_name << " is happy!" << std::endl; 
		std::cout << "[current energy = " << this->_cap << "]." << std::endl;
		this->_cap -= 20; 
	}
	else
		std::cout << this->_name << " is full! Maybe needs to go to the toilet..." << std::endl;
}

void	Pony::empty(void)
{
	std::cout << this->_name << " is going to the toilet..." << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "..." << std::endl;
	std::cout << this->_name << " refilled 20 'energy'.[current = " << this->_cap << "]." << std::endl;
}

int			Pony::getAge(void)
{
	return _age;
}

int			Pony::getCap(void)
{
	return _cap;
}

int			Pony::getHeight(void)
{
	return _height;
}

int			Pony::getWeight(void)
{
	return _weight;
}

std::string	Pony::getName(void)
{
	return _name;
}

Pony::~Pony()
{
	std::cout << "Object destroyed." << std::endl;
}
