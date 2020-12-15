/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:04:22 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/13 11:05:39 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	//Object stored locally(stack)
	Pony	pony(1, 2, 3, "P_stack");

	pony.print_data();
	for(int i = 0; i < 6; i++)
		pony.eat("plants");
	//pony is destroyed at the end of scope calling the default -or custom- destructor
}

void	ponyOnTheHeap()
{
	//Object stored in the heap, named
	Pony	*pony;

	//Initialized obj in the heap
	pony = new Pony(20, 2, 100, "P_heap");
	pony->print_data();
	for(int i = 0; i < 5; i++)
		pony->eat("hay");
	//Instance destroyed via delete as it won't call the destructor at the end of scope
	delete pony;
}

int		main(void)
{
	srand(time(NULL));
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
