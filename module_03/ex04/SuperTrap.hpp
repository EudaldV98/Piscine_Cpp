/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 13:01:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/11 12:51:44 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap 
{
	protected:
		SuperTrap(std::string n, int hitPoints, int energyPoints);
	public:
		SuperTrap(std::string n);
        virtual int baseHitPoints() const;
        virtual int maxHitPoints() const;
        virtual int baseEnergyPoints() const;
        virtual int maxEnergyPoints() const;
        virtual int level() const;
        virtual int meleeAttackDamage() const;
        virtual int rangedAttackDamage() const;
        virtual int armorAttackReduction() const;
		virtual void rangedAttack(const std::string &target) const;
		virtual void meleeAttack(const std::string &target) const;
		~SuperTrap();
};

#endif
