/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:54:43 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/14 16:55:06 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_stock[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ms);
		virtual ~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &ms);
		
		virtual void learnMateria(AMateria* mat);
		virtual AMateria* createMateria(std::string const &type);
};


#endif
