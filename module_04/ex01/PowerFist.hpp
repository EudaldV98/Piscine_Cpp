/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:37:41 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/10 23:49:41 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	protected:

		PowerFist(std::string name, int apcost, int damage);

	public:

		PowerFist();
		PowerFist(const PowerFist &p);

		PowerFist	&operator=(const PowerFist &p);
		std::string	getName() const;
		int			getDamage() const;
		int			getApCost() const;
		virtual void attack() const;

		~PowerFist();
};

#endif
