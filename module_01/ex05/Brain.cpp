/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 23:47:22 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/14 18:00:39 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

void		Brain::generateIdea() const
{
	std::cout << "What about using me to think sometimes?" << std::endl;
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
