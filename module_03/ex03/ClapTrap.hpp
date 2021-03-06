/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 10:26:56 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 11:20:47 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{	
	private:
	
		std::string _name;
		int _hitPts;
		int _maxHitPts;
		int _energyPts;
		int _maxEnergyPts;
		int	_lvl;
		int _melee_dmg;
		int	_range_dmg;
		int	_dmg_armorRed;

	protected:
		void setEnergyPoints(const int &energyPoints);
		void setHitPoints(const int &hitPoints);

	public:
		ClapTrap(std::string n, int hitPoints, int maxHitPoints,
				int energyPoints, int maxEnergyPoints, int level,
				int meleeAttackDamage, int rangedAttackDamage,
				int armorAttackReduction);
		const std::string &getName() const;
		const int &getHitPoints() const;
		const int &getMaxHitPoints() const;
		const int &getEnergyPoints() const;
		const int &getMaxEnergyPoints() const;
		const int &getLevel() const;
		const int &getMeleeAttackDamage() const;
		const int &getRangedAttackDamage() const;
		const int &getArmorAttackReduction() const;
		virtual void rangedAttack(const std::string &target) const = 0;
		virtual void meleeAttack(const std::string &target) const = 0;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		virtual ~ClapTrap();
};

#endif
