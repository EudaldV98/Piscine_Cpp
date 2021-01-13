/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UltraMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:27:43 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/12 13:04:13 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ULTRAMUTANT_HPP
# define ULTRAMUTANT_HPP

# include "Enemy.hpp" 
# include <string>
# include <stdio.h>

class UltraMutant: public Enemy
{
	public:
		
		UltraMutant();
		UltraMutant(const UltraMutant &um);
		UltraMutant		&operator=(const UltraMutant &um);
		virtual void	takeDamage(int dmg);
		~UltraMutant();
};

#endif
