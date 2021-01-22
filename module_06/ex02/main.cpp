/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:46:41 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/22 13:46:52 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifier.hpp"

int main(void)
{
    std::cout << "From pointer :" << std::endl << "\t";
    identify_from_pointer(new A);
    std::cout << "\t";
    identify_from_pointer(new B);
    std::cout << "\t";
    identify_from_pointer(new B);
    std::cout << "\t";
    identify_from_pointer(new C);

    std::cout << "\nFrom reference :" << std::endl;
    A a;
    B b;
    C c;

    std::cout << "\t";
    identify_from_reference(a);
    std::cout << "\t";
    identify_from_reference(a);
    std::cout << "\t";
    identify_from_reference(b);
    std::cout << "\t";
    identify_from_reference(c);

}
