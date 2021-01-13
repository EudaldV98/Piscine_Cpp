/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:32:09 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/10 12:28:28 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		
		std::string _name;
		int 		_aP;
		AWeapon 	*_Weapon;

	public:
		
		Character(std::string const &name);
		void	recoverAP();
		void	equip(AWeapon *weapon);
		void	attack(Enemy *target);
		const std::string	&getName() const;
		const AWeapon *getWeapon() const;
		int	getAP() const;
		~Character();
};

std::ostream &operator<< (std::ostream &out, const Character &c);

#endif
