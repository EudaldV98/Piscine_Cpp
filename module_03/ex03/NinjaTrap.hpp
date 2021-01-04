/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 12:17:48 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/29 12:30:06 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:

		NinjaTrap(std::string name);
		void rangedAttack(const std::string &target) const;
		void meleeAttack(const std::string &target) const;
		void ninjaShoebox(const FragTrap &target);
		void ninjaShoebox(const ScavTrap &target);
		void ninjaShoebox(const NinjaTrap &target);
		~NinjaTrap();
};

#endif
