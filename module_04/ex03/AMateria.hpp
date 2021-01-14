/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:31:23 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 13:22:14 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		
		std::string		_type;
		unsigned int	_xp;
	
	private:
		
		AMateria();

	public:
		
		AMateria(std::string const & type);
		AMateria(const AMateria &am);
		AMateria			&operator=(const AMateria &am);
		std::string const	&getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria	*clone() const = 0;
		virtual void 		use(ICharacter& target);
		virtual				~AMateria();
};

#endif
