/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 20:05:06 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 20:08:18 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
		private:
		
		static Form	*createShrubbery(std::string target);
		static Form	*createRobotomy(std::string target);
		static Form	*createPresidential(std::string target);

		struct ChooseForm
		{
			std::string		_name;
			Form			*(*f)(std::string target);
		};
		static const ChooseForm		tab[3];

	public:
		Intern();
		Intern(const Intern &i);
		Intern	&operator=(const Intern &i);
		~Intern();

		Form	*makeForm(std::string name, std::string target);
};

#endif
