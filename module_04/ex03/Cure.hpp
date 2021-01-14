/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:39:11 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/14 16:51:30 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure: public AMateria
{
	public:
		
		Cure();
		Cure(const Cure &i);
		virtual ~Cure();
		Cure		&operator=(const Cure &i);

		virtual AMateria			*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
