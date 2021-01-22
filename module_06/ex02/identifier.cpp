/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:41:06 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/22 13:46:13 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "identifier.hpp"

void identify_from_pointer(Base * p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	identify_from_pointer(&p);
}
