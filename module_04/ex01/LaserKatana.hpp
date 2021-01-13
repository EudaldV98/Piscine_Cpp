/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LaserKatana.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:36:21 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/12 23:47:39 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LASERKATAN_HPP
# define LASERKATAN_HPP

#include "AWeapon.hpp"
#include <stdio.h>
#include <string>

class LaserKatana: public AWeapon
{
	protected:

		LaserKatana(std::string name, int apcost, int damage);

	public:

		LaserKatana();
		LaserKatana(const LaserKatana &lp);

		LaserKatana		&operator=(const LaserKatana &lp);
		std::string		getName() const;
		int				getDamage() const;
		int				getApCost() const;
		virtual void	attack() const;

		~LaserKatana();
};

#endif
