/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 11:18:45 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 11:06:18 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string	*ptr = &s;
	std::string	&ref = s;
	
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}