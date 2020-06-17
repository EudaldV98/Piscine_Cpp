/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 21:38:12 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 18:10:42 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	private:
		std::string Name;
		int APCost, Damage;
		
	public:
		AWeapon(const std::string &name, int apcost, int damage);
		const std::string &getName() const;
		int	getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
		~AWeapon();
};

#endif