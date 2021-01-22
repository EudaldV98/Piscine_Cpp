/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 23:49:54 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/22 00:13:49 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>
# include <cstring>
# include <sstream>


class Converter
{
	private:

		std::string		_convert;

	public:

		Converter();
		Converter(std::string convert);
		Converter(Converter const &c);

		Converter		&operator=(Converter const &c);
		std::string     getConvert() const;
		void            setConvert(std::string convert);
		int             checkConvert();
		void            toInt();
		void            toFloat();
		void            toChar();
		void            toDouble();

		~Converter();
};

#endif
