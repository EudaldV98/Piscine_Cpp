/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:47:58 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/14 18:00:37 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <string>

class Brain
{
	private:

	public:
		Brain();
		void		generateIdea() const;
		std::string	identify() const;
		~Brain();
};
