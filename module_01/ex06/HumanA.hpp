/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 11:58:27 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/27 23:49:16 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		std::string	name;
		Weapon	&weapon;

	public:
		HumanA(std::string name, Weapon &Weapon);
		HumanA(std::string name);
		std::string	getName() const;
		void	setName(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack() const;
		~HumanA();
};

#endif
