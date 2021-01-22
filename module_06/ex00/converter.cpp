/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:03:37 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/22 11:57:39 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

Converter::Converter()
{
	_convert = "";
}

Converter::Converter(std::string convert): _convert(convert)
{
}

Converter::Converter(Converter const &c): _convert(c.getConvert())
{
}

Converter		&Converter::operator=(Converter const &c)
{
	_convert = c.getConvert();
	return	*this;
}

std::string		Converter::getConvert() const
{
	return	_convert;
}

void			Converter::setConvert(std::string	convert)
{
	_convert = convert;
	return	;
}

int				Converter::checkConvert()
{
	std::stringstream	iss(_convert.c_str());
	float				d;

	iss >> d;
	if (strlen(_convert.c_str()) == 1)
	{
		d = static_cast<double>(_convert[0]);
		return	(1);
	}
	if (_convert.length() > 1 && isalpha(_convert[0]))
	{
		d = atof(_convert.c_str());
		if (std::isnan(d) == false && std::isinf(d) == false)
			return (0);
	}
	return	(1);
}

void				Converter::toInt()
{
	std::istringstream	iss(_convert.c_str());
	int					i;

	i = 0;
	if (_convert.length() == 1 && !isdigit(_convert[0]))
		i = _convert[0];
	if (i || iss >> i)
		std::cout << "Int: " << i << std::endl;
	else
		std::cout << "Int: Impossible conversion" << std::endl;
}

void				Converter::toDouble()
{
	char				*point;
	double				d;

	d = 0;
	if (_convert.length() == 1 && !isdigit(_convert[0]))
	{
		d = _convert[0];
		strtof("123", &point);
	}
	else
		d = strtof(_convert.c_str(), &point);
	if (_convert.compare(point))
	{
		std::cout << "Double: " << d;
		if (floor(d) == d && std::isnan(d) == false && std::isinf(d) == false)
			std::cout << ".0";
		std::cout << std::endl;
	}
	else
		std::cout << "Double: Impossible conversion" << std::endl;
}

void				Converter::toFloat()
{
	std::istringstream	iss(_convert);
	float				d;
	char				*point;

	d = 0;
	if (_convert.length() == 1 && !isdigit(_convert[0]))
	{
		d = _convert[0];
		strtof("123", &point);
	}
	else
		d = strtof(_convert.c_str(), &point);
	if (_convert.compare(point))
	{
		std::cout << "Float: " << d;
		if (floor(d) == d && std::isnan(d) == false && std::isinf(d) == false)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	else
		std::cout << "Float: Impossible conversion" << std::endl;
}

void				Converter::toChar()
{
	int					c;

	if (_convert.length() == 1)
	{
		c = _convert[0];
		_NON_PRINT: std::cout  << "Char: ";
		if (c > 126 || c < 32)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << (char)c << std::endl;
	}
	else
	{
		if (isdigit(_convert[0]))
		{
			c = (atoi(_convert.c_str()));
			if (c > 126 || c < 32)
				goto _NON_PRINT;
			std::cout << "Char: " << (char)c << std::endl;
		}
		else
			std::cout << "Char: Impossible conversion" << std::endl;
	}
}

Converter::~Converter()
{
}
