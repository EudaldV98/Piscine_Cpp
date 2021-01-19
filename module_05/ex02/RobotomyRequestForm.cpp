/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:17:20 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 12:21:38 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r): Form(r)
{
}

void	RobotomyRequestForm::action(const Bureaucrat &executor) const
{
	if (rand() %3)
	{
		std::cout << "TRRRRRRRRR, BZZZZZZZ" << std::endl;
		std::cout << getTarget() << " has been robotomized succesfully !" << std::endl;
	}
	else
		std::cout << executor.getName() << " was not robotomized..." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
