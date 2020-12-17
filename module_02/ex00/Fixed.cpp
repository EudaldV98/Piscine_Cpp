/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:53:41 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/08 23:55:17 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): raw(0)
{
	std::cout << "Default constructor called." << std::endl;
}


Fixed::Fixed(const Fixed &c): raw(c.raw)
{
	std::cout << "Copy constructor called." << std::cout;
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

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}
