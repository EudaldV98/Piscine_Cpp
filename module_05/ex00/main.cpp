/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:51:54 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/18 13:09:50 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
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

	return	0;
}
