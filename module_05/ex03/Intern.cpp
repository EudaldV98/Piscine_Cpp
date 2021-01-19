/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 20:08:22 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 20:10:44 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

const Intern::ChooseForm	Intern::tab[3] = 
{
	{._name = "shrubbery creation", .f = &Intern::createShrubbery},
	{._name = "robotomy request", .f = &Intern::createRobotomy},
	{._name = "presidential pardon", .f = &Intern::createPresidential}
};

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &i)
{
	(void)i;
}

Intern		&Intern::operator=(const Intern &i)
{
	(void)i;
	return *this;
}

Form	*Intern::createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form		*Intern::makeForm(std::string name, std::string target)
{
	int		i;

	i = -1;
	while (++i < 3)
		if (tab[i]._name == name)
		{
			std::cout << "Intern creates " << name <<std::endl;
			return (tab[i].f(target));
		}
	std::cout << "Intern cant create form " << name << std::endl;
	return NULL;
}
