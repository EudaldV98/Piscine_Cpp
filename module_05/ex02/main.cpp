/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:51:54 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/18 13:47:26 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "EX00: BUREAUCRAT: \n" << std::endl;
	std::cout << "1." << std::endl;
	try{
		Bureaucrat b1("Johnny", 1);
		Bureaucrat b2("Johnny", 150);
		b1.decrementGrade();
		b2.incrementGrade();
		std::cout << "SUCCESS: " << b1 << " | " << b2 << std::endl;
	}catch (std:: exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "2." << std::endl;
	try{
		Bureaucrat b1("Johnny", 0);
		std::cout << "SUCCESS: " << b1;
	}catch (std:: exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "3." << std::endl;
	try{
		Bureaucrat b1("Johnny", 200);
		std::cout << "SUCCESS: " << b1;
	}catch (std:: exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "4." << std::endl;
	try{
		Bureaucrat b1("Johnny", 2);
		std::cout << "SUCCESS: " << b1;
		b1.incrementGrade();
		std::cout << "SUCCESS: " << b1;
		b1.decrementGrade();
		std::cout << "SUCCESS: " << b1;
		b1.incrementGrade();
		std::cout << "SUCCESS: " << b1;
		b1.incrementGrade();
		std::cout << "SUCCESS: " << b1;
	}catch (std:: exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "5." << std::endl;
	try{
		Bureaucrat b1("Johnny", 150);
		b1.decrementGrade();
		std::cout << "SUCCESS: " << b1;
	}catch (std:: exception &e){
		std::cout << "Exception: " << e.what();
	}

	std::cout << "\nEX01 : WITH FORMS\n\n";
    std::cout << "6." << std::endl;
    try{
        Bureaucrat b1("Johnny", 1);
        Form f1("Formulaire", 150, 5);
        b1.signForm(f1);
        std::cout << "Success: " << b1 << " " << f1 << std::endl;
    }catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "7." << std::endl;
    try{
        Bureaucrat b1("Johnny", 160);
        Form f1("Formulaire", 150, 5);
        b1.signForm(f1);
        std::cout << "Success: " << b1 << " " << f1 << std::endl;
    }catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "8." << std::endl;
    try{
        Bureaucrat b1("Johnny", 150);
        Form f1("Formulaire", 150, 5);
        b1.signForm(f1);
        Form f2("Formulaire", 149, 5);
        b1.signForm(f2);
        std::cout << "Success: " << b1 << " " << f1 << " " << f2 << std::endl;
    }catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "9." << std::endl;
    try{
        Bureaucrat b1("Johnny", 160);
        Form f1("Formulaire", 150, 5);
        f1.beSigned(b1);
        std::cout << "Success: " << b1 << " " << f1 << std::endl;
    }catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

	return	0;
}
