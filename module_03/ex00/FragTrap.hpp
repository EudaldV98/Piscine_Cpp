/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:47:27 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/17 17:54:06 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

class FragTrap
{
	private:
		int		hitPts = 100;
		int		maxHitPts = 100;
		int		energyPts = 100;
		int		level = 1;
		int		melee_dmg = 30;
		int		range_dmg = 20;
		int		armor_red = 5;
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
