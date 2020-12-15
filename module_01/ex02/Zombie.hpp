/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:23 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 11:03:02 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:

		std::string	_name;
		std::string	_type;

	public:

		Zombie(std::string name, std::string type);
		void		announce();
		std::string	getName();
		std::string	getType();
		~Zombie();
};

#endif
