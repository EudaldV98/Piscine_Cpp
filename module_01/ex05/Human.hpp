/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:51:12 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/24 00:08:14 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

class Human
{
	private:
		Brain	myBrain;
	public:
		Human();
		std::string	identify() const;
		Brain	&getBrain();
		~Human();
};
