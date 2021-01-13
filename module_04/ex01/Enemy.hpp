/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:46:44 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/11 00:13:17 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	private:

		Enemy();

	protected:
		
		int 		_hp;
		std::string _type;

	public:

		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &e);

		std::string	getType() const;
		int	getHp() const;
		virtual void	takeDamage(int dmg);
		Enemy	&operator=(const Enemy &e);
		
		virtual ~Enemy();
};

#endif
