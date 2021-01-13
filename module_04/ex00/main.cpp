/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 23:58:09 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/10 12:15:22 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Student.hpp"

int main()
{
	Sorcerer voldemort("Voldemort", " the unnamed");
	Victim harry("Harry");
	Victim ron("Ron");
	Peon pettigrew("Pettigrew");
	Student charles("Charles");
	std::cout << voldemort << harry << ron << pettigrew << charles;
	voldemort.polymorph(harry);
	voldemort.polymorph(ron);
	voldemort.polymorph(charles);
	voldemort.polymorph(pettigrew);
	std::cout << "=========================" << std::endl;
	harry = pettigrew;
	std::cout << voldemort << harry << pettigrew;
	voldemort.polymorph(harry);
	voldemort.polymorph(pettigrew);
	return 0;
}
