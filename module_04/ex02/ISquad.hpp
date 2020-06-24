/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 23:55:39 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/24 10:40:02 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual int	getCount() const = 0;
		virtual ISpaceMarine* getUnit(int n) const = 0;
		virtual int	push(ISpaceMarine *sm) = 0;
		virtual ~ISquad() {};
};

#endif
