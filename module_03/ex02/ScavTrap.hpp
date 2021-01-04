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

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:

		ScavTrap(std::string name);	
		void rangedAttack(const std::string &target) const;
		void meleeAttack(const std::string &target) const;
		void challengeNewcomer(const std::string &target);
		~ScavTrap();
};

#endif
