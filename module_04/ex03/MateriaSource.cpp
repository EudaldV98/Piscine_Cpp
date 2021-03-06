/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:54:09 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/14 17:07:26 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int		i;

	i = -1;
	while (++i < 4)
		_stock[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	int		i;

	i = -1;
	while (++i < 4)
		_stock[i] = ms._stock[i];
}

MateriaSource::~MateriaSource()
{
	int		i;

	i = -1;
	while (++i < 4)
		delete _stock[i];
}

MateriaSource		&MateriaSource::operator=(const MateriaSource &ms)
{
	int		i;

	i = -1;
	while (++i < 4)
		_stock[i] = ms._stock[i];
	return (*this);
}

void			MateriaSource::learnMateria(AMateria* mat)
{
	int		i;

	i = -1;
	while (i++ < 4)
		if (_stock[i] == NULL)
		{
			_stock[i] = mat;
			return;
		}
}

AMateria*		MateriaSource::createMateria(std::string const &type)
{
	int		i;

	i = -1;
	while (++i < 4)
		if (_stock[i] && _stock[i]->getType() == type)
			return (_stock[i]->clone());
	return (NULL);
}
