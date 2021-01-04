/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 20:54:39 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/22 00:04:55 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "-----------FR4G_TP-----------" << std::endl;
	{
		FragTrap ft("FragTrap_A");

		ft.rangedAttack("your entire family");
		ft.meleeAttack("your entire family");
		ft.takeDamage(42);
		ft.beRepaired(42);

		ft.vaulthunter_dot_exe("your whole family");
		ft.vaulthunter_dot_exe("your whole family");
		ft.vaulthunter_dot_exe("your whole family");
		ft.vaulthunter_dot_exe("your whole family");
		ft.vaulthunter_dot_exe("your whole family");
	}
	std::cout << "\n-----------SC4V_TP-----------" << std::endl;
	{
		ScavTrap ft("ScavTrap_A");

		ft.rangedAttack("your entire family");
		ft.meleeAttack("your entire family");
		ft.takeDamage(42);
		ft.beRepaired(42);

		ft.challengeNewcomer("your whole family");
		ft.challengeNewcomer("your whole family");
		ft.challengeNewcomer("your whole family");
		ft.challengeNewcomer("your whole family");
		ft.challengeNewcomer("your whole family");
	}
	return 0;
}
