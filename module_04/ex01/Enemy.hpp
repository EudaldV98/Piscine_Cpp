/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:46:44 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 19:39:32 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	private:
		int HP;
		std::string Type;

	public:
		Enemy(int hp, std::string const &type);
		std::string	getType() const;
		int	getHP() const;
		virtual void	takeDamage(int dmg);
		~Enemy();
};

#endif