/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:33 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/29 11:29:08 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	setZombieType;

	public:
		ZombieEvent(/* args */);
		Zombie*	newZombie(std::string name);
		Zombie* randomChump();
		~ZombieEvent();
};
