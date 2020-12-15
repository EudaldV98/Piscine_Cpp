/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:51:12 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/14 18:00:34 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

class Human
{
	private:
		Brain	_myBrain;
	public:
		Human();
		std::string	identify() const;
		Brain	&getBrain();
		~Human();
};
