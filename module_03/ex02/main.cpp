/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 19:11:44 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/25 19:12:24 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	std::cout << "-----------FR4G_TP----------" << std::endl;
	{
		FragTrap ft("Frag_Trap_A");

		ft.rangedAttack("YOU");
 		ft.meleeAttack("YOU");
		ft.takeDamage(42);
		ft.beRepaired(42);

		ft.vaulthunter_dot_exe("YOU");
		ft.vaulthunter_dot_exe("YOU");
		ft.vaulthunter_dot_exe("YOU");
		ft.vaulthunter_dot_exe("YOU");
	}
	std::cout << "\n-----------SC4V_TP-----------" << std::endl;
	{
		ScavTrap ft("Scav_Trap_A");

		ft.rangedAttack("YOU");
		ft.meleeAttack("YOU");
		ft.takeDamage(42);
		ft.beRepaired(42);

		ft.challengeNewcomer("YOU");
		ft.challengeNewcomer("YOU");
	}
	return 0;
}
