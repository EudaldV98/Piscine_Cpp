/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:53:41 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/09 10:59:03 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): raw(0)
{
	std::cout << "Default constructor called." << std::endl;
}


Fixed::Fixed(const Fixed &c): raw(c.raw)
{
	std::cout << "Copy constructor called." << std::endl;
}

Fixed::Fixed(const int f): raw(f << fracBits)
{
	std::cout << "Int constructir called." << std::endl;
}

Fixed::Fixed(const float f): raw(roundf(f * power))
{
	std::cout << "Float constructor called." << std::endl;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits memeber func called." << std::endl;
	return raw;
}



Fixed &Fixed::operator=(const Fixed &c)
{
	std::cout << "Assignation operator called (overload)." << std::endl;
	raw = c.getRawBits();
	return *this;
}

void	Fixed::setRawBits(const int r)
{
	std::cout << "setRawBits member func called." << std::endl;
	raw = r;
}

float	Fixed::toFloat(void) const
{
	return float(raw) / power;
}

int		Fixed::toInt(void) const
{
	// >> FOR SHIFTING
	return raw >> fracBits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

std::ostream	&operator<<(std::ostream &o, const	Fixed &f)
{
	return o << f.toFloat();
}
