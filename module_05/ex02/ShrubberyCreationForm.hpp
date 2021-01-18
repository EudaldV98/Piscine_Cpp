/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 23:51:16 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/18 23:56:32 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:

		ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &s);

	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		virtual ~ShrubberyCreationForm();

		virtual void	action(const Bureaucrat &executor) const;
};

#endif
