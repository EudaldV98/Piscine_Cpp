/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:33 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/22 20:16:16 by jvaquer          ###   ########.fr       */
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
