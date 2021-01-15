/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 17:59:56 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/15 17:23:40 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PlasmaRifle: public AWeapon
{
	protected:
		
		PlasmaRifle(std::string name, int apcost, int damage);

	public:

		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &p);

		PlasmaRifle		&operator=(const PlasmaRifle &p);
		std::string		getName() const;
		int				getDamage() const;
		int				getApCost() const;
		virtual	void	attack() const;
		
		virtual ~PlasmaRifle();
};

#endif
