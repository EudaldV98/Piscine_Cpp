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
    {
        FragTrap ft("unicorn");

        ft.rangedAttack("your whole family");
        ft.meleeAttack("your whole family");
        ft.takeDamage(42);
        ft.beRepaired(42);

        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
    }
    {
        ScavTrap ft("unicorn");

        ft.rangedAttack("your whole family");
        ft.meleeAttack("your whole family");
        ft.takeDamage(42);
        ft.beRepaired(42);

        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
    }
    return 0;
}
