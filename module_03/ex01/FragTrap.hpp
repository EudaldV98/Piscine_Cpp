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

	int					_hitPts;
	int					_maxHitPts;
	int					_energyPts;
	int					_maxEnergyPts;
	int					_level;
	int					_melee_dmg;
	int					_range_dmg;
	int					_armor_red;
	std::string _name;

	public:

	FragTrap(std::string n);
	void				rangedAttack(const std::string &target) const;
	void				meleeAttack(const std::string &target) const;
	void				takeDamage(unsigned int n);
	void				beRepaired(unsigned int n);
	void				vaulthunter_dot_exe(const std::string &target);
	std::string	getName(void);
	~FragTrap();
};

#endif 
