/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:53:17 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/14 16:53:36 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &i);
		virtual ~Ice();
		Ice		&operator=(const Ice &i);

		virtual Ice			*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
