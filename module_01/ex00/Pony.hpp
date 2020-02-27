/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:04:35 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/27 18:49:35 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

class Pony
{
	private:

		int			hp;
		int			lvl;
		int			dmg;
		int			def;

	public:

		int			age;
		int			height;
		int			weight;
		std::string	name;
		Pony(int _age, int _height, int _weight, std::string _name);
		void	print_stats();
		void	print_data();
		void	attack(Pony &target);
		void	upgrade();
		~Pony();
};
