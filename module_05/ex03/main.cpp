/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:51:54 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 20:11:38 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <exception>
#include <iostream>

int main()
{
    Intern someRandomIntern;
    Bureaucrat Biden("joe", 1);
    Bureaucrat Trump("Donald", 150);
    Form *rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Trump.signForm(*rrf);
    Biden.signForm(*rrf);
    rrf->execute(Biden);
    std::cout << std::endl;

    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    Trump.signForm(*rrf);
    Biden.signForm(*rrf);
    rrf->execute(Biden);
    std::cout << std::endl;
    
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    Trump.signForm(*rrf);
    Biden.signForm(*rrf);
    Biden.signForm(*rrf);
    rrf->execute(Biden);
    std::cout << std::endl;
    
    rrf = someRandomIntern.makeForm("coffee", "Bender");
	
	return 0;
}
