/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:26:26 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/11 14:15:36 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:

		RadScorpion();
		RadScorpion(const RadScorpion &rs);
		RadScorpion	&operator=(const RadScorpion &rs);
		virtual void	takeDamage(int Damage);
		~RadScorpion();
};

#endif
