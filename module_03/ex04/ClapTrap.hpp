/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 10:26:56 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 12:35:29 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitPts;
		int maxHitPts;
		int energyPts;
		int maxEnergyPts;
		int	lvl;
		int melee_dmg;
		int	range_dmg;
		int	dmg_armorRed;

	protected:
		void setEnergyPoints(const int &energyPoints);
		void setHitPoints(const int &hitPoints);

	public:
		ClapTrap(std::string n, int hitPoints, int energyPoints);
		virtual ~ClapTrap();

		const std::string &getName() const;
		const int &getHitPoints() const;
		const int &getEnergyPoints() const;

 		virtual int baseHitPoints() const = 0;
        virtual int maxHitPoints() const = 0;
        virtual int baseEnergyPoints() const = 0;
        virtual int maxEnergyPoints() const = 0;
        virtual int level() const = 0;
        virtual int meleeAttackDamage() const = 0;
        virtual int rangedAttackDamage() const = 0;
        virtual int armorAttackReduction() const = 0;

		virtual void rangedAttack(const std::string &target) const = 0;
		virtual void meleeAttack(const std::string &target) const = 0;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
