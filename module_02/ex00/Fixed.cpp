/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:53:41 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/08 23:35:06 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _raw(0)
{
	std::cout << "Default constructor called." << std::endl;
}


Fixed::Fixed(const Fixed &c): _raw(c._raw)
{
	std::cout << "Copy constructor called." << std::cout;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits memeber func called." << std::endl;
	return _raw;
}



Fixed &Fixed::operator=(const Fixed &c)
{
	std::cout << "Assignation operator called (overload)." << std::endl;
	_raw = c.getRawBits();
	return *this;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member func called." << std::endl;
	_raw = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}