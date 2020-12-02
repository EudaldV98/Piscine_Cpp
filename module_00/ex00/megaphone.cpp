/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:54:29 by jvaquer           #+#    #+#             */
/*   Updated: 2020/11/27 10:29:14 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int		i;
	int		k;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (i < ac)
	{
		k = -1;
		while (av[i][++k])
			std::cout << (char)toupper(av[i][k]);
		i++;	
	}
	std::cout << std::endl;
	return 0;
}
