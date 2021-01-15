/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:52:58 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/15 17:28:46 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice(): AMateria("Ice")
{
}

Ice::Ice(const Ice &i): AMateria("Ice")
{
	(void)i;
}

Ice::~Ice()
{
}

Ice		&Ice::operator=(const Ice &i)
{
	(void)i;
	return (*this);
}

Ice		*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
