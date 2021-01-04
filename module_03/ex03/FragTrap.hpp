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

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:

		FragTrap(std::string name);
		void rangedAttack(const std::string &target) const;
		void meleeAttack(const std::string &target) const;
		void vaulthunter_dot_exe(const std::string &target);
		~FragTrap();
};

#endif
