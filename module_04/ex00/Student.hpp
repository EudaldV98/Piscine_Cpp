/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 20:59:01 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/16 21:05:32 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Student: public Victim
{
	public:

		Student(std::string name);
		virtual void getPolymorphed() const;
		virtual ~Student();
};

#endif
