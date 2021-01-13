/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 11:57:48 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/14 23:27:30 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:

		std::string _name;
		std::string _title;
	
	public:
		
		Sorcerer(std::string name, std::string title);
		const std::string &getName() const;
		const std::string &getTitle() const;
		void	polymorph(Victim const &v) const;
		~Sorcerer();
};

std::ostream &operator<< (std::ostream &out, const Sorcerer &s);

#endif
