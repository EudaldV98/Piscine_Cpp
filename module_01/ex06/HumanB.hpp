/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 11:49:47 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/27 23:49:57 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		std::string	name;
		Weapon	*weapon;

	public:
		HumanB(std::string name, Weapon Weapon);
		HumanB(std::string name);
		std::string	getName() const;
		void	setName(std::string name);
		void	setWeapon(Weapon &new_weapon);
		void	attack() const;
		~HumanB();
};

#endif
