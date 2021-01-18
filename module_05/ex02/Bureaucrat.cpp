/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:38:25 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/18 13:54:29 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): _name(b.getName()), _grade(b.getGrade())
{
}

const std::string	Bureaucrat::getName() const
{
	return	_name;
}

int					Bureaucrat::getGrade() const
{
	return	_grade;
}

void				Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void				Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.\n");
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return	("Grade is too low.\n");
}

void				Bureaucrat::signForm(Form &f)
{
	try{
		if (f.getSigned())
		{
			std::cout << f.getName() << " already signed." << std::endl;
			return ;
		}
		f.beSigned(*this);
		std::cout << _name << " has signed " << f.getName() << std::endl;
	} catch(std::exception e){
		std::cout << _name << " can not sign " << f.getName() << e.what() << std::endl;
	}
}

std::ostream			&operator<<(std::ostream &out, const Bureaucrat &b)
{
	return	(out << b.getName() << ", bureaucrat grade is " << b.getGrade() << "." << std::endl);
}

Bureaucrat::~Bureaucrat()
{
}
