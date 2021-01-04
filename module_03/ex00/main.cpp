/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 11:48:08 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/20 12:13:31 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    srand(time(NULL));
    FragTrap ft("A current human");

    ft.rangedAttack("A murderer");
    ft.meleeAttack("A poor cat");
    ft.takeDamage(42);
    ft.beRepaired(42);

    ft.vaulthunter_dot_exe("your entire family");
    ft.vaulthunter_dot_exe("your entire family");
    ft.vaulthunter_dot_exe("your entire family");
    ft.vaulthunter_dot_exe("your entire family");
    ft.vaulthunter_dot_exe("your entire family");
    return 0;
}
