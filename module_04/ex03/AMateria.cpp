/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:31:33 by jvaquer           #+#    #+#             */
/*   Updated: 2020/10/01 15:10:00 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
    _xp = 0;
}

const std::string &AMateria::getType() const
{
    return _type;
}

unsigned int AMateria::getXP() const
{
    return  _xp;
}

AMateria::~AMateria()
{
}
