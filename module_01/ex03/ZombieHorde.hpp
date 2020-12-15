/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 13:23:42 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/14 11:33:54 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"
class ZombieHorde
{
	private:
		int		_n;
		Zombie	*_zombies;
	public:
		ZombieHorde(const int n);
		void	announce(void);
		~ZombieHorde();
};

#endif
