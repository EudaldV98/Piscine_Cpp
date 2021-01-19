/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:51:54 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/19 13:00:53 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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

	std::cout << "\nEX02 : WITH DIFFERENT FORMS\n\n";
	{
		std::cout << "10." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		PresidentialPardonForm f1("Your dad10");
		b2.signForm(f1);
		f1.execute(b2);
		std::cout << std::endl;
	}

	{
		std::cout << "11." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		PresidentialPardonForm f1("Your dad11");
		b2.signForm(f1);
		f1.execute(b1);
		std::cout << std::endl;
	}

	{
		std::cout << "12." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		PresidentialPardonForm f1("Your dad12");
		b1.signForm(f1);
		f1.execute(b1);
		std::cout << std::endl;
	}

	{
		std::cout << "13." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		RobotomyRequestForm f1("Your dad13");
		b2.signForm(f1);
		f1.execute(b2);
		std::cout << std::endl;
	}

	{
		std::cout << "14." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		RobotomyRequestForm f1("Your dad14");
		b2.signForm(f1);
		f1.execute(b1);
		std::cout << std::endl;
	}

	{
		std::cout << "15." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		RobotomyRequestForm f1("Your dad15");
		b1.signForm(f1);
		f1.execute(b1);
		std::cout << std::endl;
	}

	{
		std::cout << "16." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		ShrubberyCreationForm f1("Your_dad16");
		b2.signForm(f1);
		f1.execute(b2);
		std::cout << std::endl;
	}

	{
		std::cout << "16 bis." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		ShrubberyCreationForm f1("Your_dad16_bis");
		b2.signForm(f1);
		f1.execute(b2);
		std::cout << std::endl;
	}

	{
		std::cout << "17." << std::endl;
		Bureaucrat b1("Johnny", 150);
		Bureaucrat b2("Joe", 1);
		ShrubberyCreationForm f1("Your dad17");
		b2.signForm(f1);
		f1.execute(b1);
		std::cout << std::endl;
	}

	{
		std::cout << "18." << std::endl;
		Bureaucrat b1("Johnny", 150);
		ShrubberyCreationForm f1("Your dad18");
		b1.signForm(f1);
		f1.execute(b1);
	} 
	return	0;
}
