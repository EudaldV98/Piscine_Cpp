/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:26:05 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 19:31:06 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}



RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
