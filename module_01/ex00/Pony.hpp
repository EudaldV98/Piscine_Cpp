/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:04:35 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/14 10:40:10 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <time.h>

class Pony
{
	private:

		int			_age;
		int			_height;
		int			_weight;
		std::string	_name;
		int			_cap;

	public:

		Pony(int age, int height, int weight, std::string name);
		void		print_data(void);
		void		eat(std::string s);
		void		empty(void);
		void		upgrade(void);
		int			getAge(void);
		int			getHeight(void);
		int			getWeight(void);
		std::string	getName(void);
		int			getCap(void);
		~Pony();
};
#endif
