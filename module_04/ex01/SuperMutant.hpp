/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 19:03:23 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/15 17:24:51 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class SuperMutant: public Enemy
{
	public:

		SuperMutant();
		SuperMutant(const SuperMutant &sm);
		SuperMutant		&operator=(const SuperMutant &sm);
		virtual void	takeDamage(int dmg);
		virtual ~SuperMutant();
};

#endif
