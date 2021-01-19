/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:32:12 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 12:55:50 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s):
	Form(s)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void		PresidentialPardonForm::action(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
