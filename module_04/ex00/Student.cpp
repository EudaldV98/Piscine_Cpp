/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 21:00:20 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/08 00:05:25 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Student.hpp"

Student::Student(std::string name): Victim(name)
{
	std::cout << "AAAAAARGH! WHERE AM I?!" << std::endl;
}

void	Student::getPolymorphed() const
{
	std::cout << _name << " muted into a crazy ostrich" << std::endl;
}

Student::~Student()
{
	std::cout << "BYE! LEAVE ME ALONE!" << std::endl;
}
