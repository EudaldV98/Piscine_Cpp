/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 20:13:44 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/25 19:14:01 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
 
class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string n);
		void	rangedAttack(const std::string &target) const;
		void	meleeAttack(const std::string &target) const;
		void	challengeNewcomer(const std::string &target);
		~ScavTrap();
};

#endif
