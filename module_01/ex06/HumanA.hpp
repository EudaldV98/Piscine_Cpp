/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 11:58:27 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 10:24:57 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		HumanA(std::string name);
		std::string	getName() const;

		void	setName(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack() const;
		~HumanA();
};

#endif
