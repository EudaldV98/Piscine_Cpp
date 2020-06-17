/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 17:59:56 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/17 18:10:58 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		virtual void attack() const;
		~PlasmaRifle();
};

#endif
