/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:48:38 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/22 20:16:40 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String panther.");
	std::cout << *panther << std::endl;
	delete panther;
}

int		main()
{
	memoryLeak();
	while (1)
		;
	return (0);
}
