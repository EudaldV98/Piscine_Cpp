/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:54:06 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/26 12:48:11 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _size(0)
{
}

Span::Span(unsigned int n): _size(n)
{
}

Span::Span(Span const &s)
{
	_size = s._size;
}

Span	&Span::operator=(Span const &s)
{
	_size = s._size;
	_tab = s._tab;
	return	*this;
}

void	Span::addNumber(int nb)
{
	if (_tab.size() >= _size)
		throw	Span::NotEnoughSpace();
	_tab.push_back(nb);
}

void	Span::addNumber(int start, int end)
{
	if (start > end)
		throw	Span::NotEnoughElem();
	if (_size < _tab.size() + (end - start))
		throw	Span::NotEnoughSpace();
	for (int i = 0; i < end; i++)
		_tab.push_back(i);
}

int		Span::shortestSpan()
{
	int				min;

	if (_tab.size() <= 1)
		throw Span::NotEnoughElem();
	min = 0;
	std::sort(_tab.begin(), _tab.end());
	for(int i = 0; i < _tab.size(); i++)
	{
		if (std::abs(_tab[i] - _tab[i + 1]) < min || i == 0)
			min = std::abs(_tab[i] - _tab[i + 1]);
	}	
	return	min;
}

int		Span::longestSpan()
{
	int	min;
	int	max;

	if (_tab.size() <= 1)
		throw Span::NotEnoughElem();
	min = *std::min_element(_tab.begin(), _tab.end());
	max = *std::max_element(_tab.begin(), _tab.end());
	return	max - min;
}


Span::NotEnoughElem::NotEnoughElem() throw ()
{
}

Span::NotEnoughElem::~NotEnoughElem() throw ()
{
}

Span::NotEnoughElem::NotEnoughElem(NotEnoughElem const & copy) throw()
{
	*this = copy;
};

Span::NotEnoughElem & Span::NotEnoughElem::operator=(NotEnoughElem const & ope) throw()
{
	(void) ope; return *this;
}

const char* Span::NotEnoughElem::what() const throw()
{
	return ("Not enough elements \n");
};


Span::NotEnoughSpace::NotEnoughSpace() throw ()
{
}

Span::NotEnoughSpace::~NotEnoughSpace() throw ()
{
}

Span::NotEnoughSpace::NotEnoughSpace(NotEnoughSpace const & copy) throw() 
{
	*this = copy;
}

Span::NotEnoughSpace &Span::NotEnoughSpace::operator=(NotEnoughSpace const & ope) throw() 
{
	(void) ope; return *this;
}

const char* Span::NotEnoughSpace::what() const throw() 
{ 
	return "Not Enough space left\n";
}

Span::~Span()
{
}
