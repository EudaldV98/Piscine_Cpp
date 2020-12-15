/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 10:14:46 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 10:14:56 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:

		std::string	_type;

	public:

		Weapon(std::string type);
		const std::string	&getType() const;
		void	setType(std::string type);
		~Weapon();
};

#endif
