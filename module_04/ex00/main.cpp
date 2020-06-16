/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 23:58:09 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/16 21:24:09 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Mad.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Victim pete("Pete");
	Peon joe("Joe");
	Mad max("Max");
	std::cout << robert << jim << joe << max << pete;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(max);
	robert.polymorph(pete);
	std::cout << "=========================" << std::endl;
	jim = pete;
	std::cout << robert << jim << pete;
	robert.polymorph(jim);
	robert.polymorph(pete);
	return 0;
}
