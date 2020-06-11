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

    return 0;
}
