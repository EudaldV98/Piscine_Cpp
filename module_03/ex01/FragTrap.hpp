/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:47:27 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/21 20:29:44 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
{
	private:
		int		hitPts;
		int		maxHitPts;
		int		energyPts;
		int		maxEnergyPts;
		int		level;
		int		melee_dmg;
		int		range_dmg;
		int		armor_red;
		std::string name;

	public:
		FragTrap(std::string n);
		void	rangedAttack(const std::string &target) const;
		void	meleeAttack(const std::string &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void 	vaulthunter_dot_exe(const std::string &target);
		~FragTrap();
};

#endif
