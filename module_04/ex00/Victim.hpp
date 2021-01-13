/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 19:36:35 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/16 21:16:17 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
	protected:

		std::string _name;
	public:
	
		Victim(std::string name);
		const std::string &getName() const;
		virtual void	getPolymorphed() const;
		Victim &operator=(const Victim&v);
		virtual ~Victim();
};

std::ostream &operator<< (std::ostream &out, const Victim &s);

#endif
