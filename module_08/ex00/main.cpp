/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:21:51 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/26 11:23:24 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::list<int> lst1;

	lst1.push_back(1);
	lst1.push_back(4);
	lst1.push_back(10);

	std::list<int>::const_iterator it;
	std::cout << "Printing list : " << std::endl;
	for (it = lst1.begin(); it != lst1.end(); it++)
		std::cout << *it << std::endl;

	std::cout << "\nSearching 4 in the list : " << std::endl;
	if (easyfind(lst1, 4) == true)
		std::cout << "value found !" << std::endl;
	else
		std::cout << "value not found" << std::endl;

	std::cout << "Searching 2 in the list : " << std::endl;  
	if (easyfind(lst1, 2) == true)
		std::cout << "value found !" << std::endl;
	else
		std::cout << "value not found" << std::endl;

	std::vector<int>  vect;
	for (int i = 0; i < 9; i++)
		vect.push_back(i*2);
	std::vector<int>::const_iterator ite;
	std::cout << "\nPrinting vector : " << std::endl;
	for (ite = vect.begin(); ite != vect.end(); ite++)
		std::cout << *ite << std::endl;

	std::cout << "\nSearching 12 in the vector : " << std::endl;
	if (easyfind(vect, 12) == true)
		std::cout << "value found !" << std::endl;
	else
		std::cout << "value not found" << std::endl;

	std::cout << "Searching 7 in the vector : " << std::endl;  
	if (easyfind(vect, 7) == true)
		std::cout << "value found !" << std::endl;
	else
		std::cout << "value not found" << std::endl;

	return (0);
}
