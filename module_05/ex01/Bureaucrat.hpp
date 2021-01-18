/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:29:05 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/18 13:49:45 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		const std::string	_name;
		int					_grade;

		Bureaucrat			&operator=(const Bureaucrat &b);

	public:

		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);

		const std::string	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form &f);

		class GradeTooHighException: public std::exception
		{
			virtual const char		*what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char	*what() const throw();
		};
		~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b);

#endif
