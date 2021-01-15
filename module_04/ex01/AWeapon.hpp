/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 21:38:12 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/15 17:22:53 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	protected:

		AWeapon();
		std::string _name;
		int 		_apCost; 
		int			_damage;

	public:
		
		AWeapon(const std::string &name, int apcost, int damage);
		AWeapon(const AWeapon &w);
		
		const std::string	&getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		AWeapon	&operator=(const AWeapon &w);
		virtual void	attack() const = 0;
		
		virtual ~AWeapon();
};

#endif
