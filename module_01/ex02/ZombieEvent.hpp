/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:33 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/15 11:03:10 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:

		std::string	_type;

	public:

		ZombieEvent(std::string type);
		Zombie*	newZombie(std::string name);
		void		randomChump();
		void		setZombieType(std::string type);
		std::string	getType();
		~ZombieEvent();
};

#endif
