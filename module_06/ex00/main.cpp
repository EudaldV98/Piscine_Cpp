/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:27:12 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/22 11:36:51 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "converter.hpp"

int         main(int ac, char **av)
{
    std::string     input;
    Converter		nb;

    if (ac != 2)
    {
        std::cout << "Error: 1 argument required" << std::endl;
        return (1);
    }
    input = av[1];
    if (!input.compare(0, 4, "nanf") || !input.compare(0, 4, "inff")
        || !input.compare(0, 5, "+inff") || !input.compare(0, 5, "-inff"))
    {
        if (input.length() == 4)
            input[3] = 0;
        else if (input.length() == 5)
            input[4] = 0;
        else
            goto _ERROR;
    
    }nb.setConvert(input);

    if (!nb.checkConvert())
    {
	_ERROR: std::cout << "Error : Argument invalid" << std::endl;
        return (1);
    }
    nb.toChar();
    nb.toInt();
    nb.toFloat();
    nb.toDouble();
    return (0);
}
