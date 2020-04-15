/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:33 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/15 13:54:03 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	_type;

	public:
		ZombieEvent(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump();
		void	setZombieType(std::string type);
		~ZombieEvent();
};
