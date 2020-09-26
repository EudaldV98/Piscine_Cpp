/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:31:23 by jvaquer           #+#    #+#             */
/*   Updated: 2020/09/26 18:25:49 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	private:
	std::string	_type;
	unsigned int _xp;
	AMateria();

	public:
	AMateria(std::string const & type);
	~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter& target);
};