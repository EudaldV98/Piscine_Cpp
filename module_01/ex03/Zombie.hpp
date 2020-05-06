/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:23 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/22 20:14:59 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:

	public:
		std::string	name;
		std::string	type;
		Zombie();
		Zombie(std::string _name, std::string _type);
		void	announce();
		~Zombie();
};
