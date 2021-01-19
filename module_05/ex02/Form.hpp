/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:11:04 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 12:50:02 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <cstdlib>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_signedGrade;
		const int			_execGrade;

		Form				&operator=(const Form &f);
		Form();

	public :

		Form(std::string name, std::string target, const int signedGrade, const int execGrade);
		Form(const Form &f);
		
		int					getSignedGrade() const;
		int					getExecGrade() const;
		const std::string	getName() const;
		const std::string	getTarget() const;
		bool				getSigned() const;

		void				beSigned(const Bureaucrat &b);
		virtual void		execute(const Bureaucrat &executor) const;
		virtual void		action(const Bureaucrat &executor) const = 0;
	
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class FormNoSigned: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		~Form();
};

std::ostream	&operator<<(std::ostream &out, const Form &f);

#endif
