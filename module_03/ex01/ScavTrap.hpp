/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 20:13:44 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/24 23:37:20 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
	private:

		int					_hitPts;
		int 				_maxHitPts;
		int 				_energyPts;
		int					_maxEnergyPts;
		int					_level;
		int 				_melee_dmg;
		int					_range_dmg;
		int					_armorRed;
		std::string	_name;

	public:

		ScavTrap(std::string n);
		void				rangedAttack(const std::string &target) const;
		void				meleeAttack(const std::string &target) const;
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				challengeNewcomer(const std::string &target);
		std::string	getName(void);
		~ScavTrap();
};

#endif
