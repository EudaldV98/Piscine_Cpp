/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:56:31 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 12:52:48 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUEST_HPP
# define ROBOTOMYREQUEST_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:

		RobotomyRequestForm();
		RobotomyRequestForm		&operator=(const RobotomyRequestForm &r);

	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &r);
		virtual void			action(const Bureaucrat &executor) const;

		virtual ~RobotomyRequestForm();
};

#endif
