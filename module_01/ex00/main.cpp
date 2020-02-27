/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:04:22 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/27 18:02:00 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	//Object stored locally(stack)
	Pony	pony(1, 2, 3, "Pep");
	//Object stored in the heap
	Pony	*mechant;

	//Initialized obj in the heap
	mechant = new Pony(3,4,5, "Tomeu");
	pony.attack(*mechant);
	pony.upgrade();
	pony.attack(*mechant);
	//Instance destroyed via delete as it won't call the destructor at the end of scope
	delete mechant;
	//pony is destroyed at the end of scope calling the default -or custom- destructor
}

void	ponyOnTheHeap()
{
	Pony	*pony;

	pony = new Pony(20, 2, 100, "Eudald");
	pony->print_data();
	pony->print_stats();
	pony->upgrade();
	pony->upgrade();
	pony->upgrade();
	pony->print_data();
	pony->print_stats();
	delete pony;
}

int		main(int ac, char **av)
{
	srand(time(NULL));
	ponyOnTheHeap();
	return 0;
}
