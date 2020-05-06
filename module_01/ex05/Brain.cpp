/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 23:47:22 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/23 23:52:26 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
}

void		Brain::generateIdea() const
{
	std::cout << "How about drinking upside down?" << std::endl;
}

std::string	Brain::identify() const
{
	std::stringstream output;
	output << std::hex << std::showbase << this;
	return output.str();
}

Brain::~Brain()
{
}
