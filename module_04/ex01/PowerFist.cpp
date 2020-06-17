/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:38:34 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 20:58:20 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
}
