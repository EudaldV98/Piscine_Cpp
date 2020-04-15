/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 13:23:42 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/15 14:12:58 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
