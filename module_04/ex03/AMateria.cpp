/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:31:33 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 13:31:01 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type(""), _xp(0)
{
}

AMateria::AMateria(std::string const & type): _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &am): _type(am._type), _xp(am._xp)
{
	*this = am;
}

AMateria	&AMateria::operator=(const AMateria &am)
{
	_type = am.getType();
	_xp = am.getXP();
	return *this;
}

const std::string &AMateria::getType() const
{
    return _type;
}

unsigned int	AMateria::getXP() const
{
    return  _xp;
}

void			AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

AMateria::~AMateria()
{
}
