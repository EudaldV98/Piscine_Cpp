/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:23:00 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 12:32:09 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:

		PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &p);

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &p);
		virtual void			action(Bureaucrat const &executor) const;

		virtual ~PresidentialPardonForm();
};

#endif
