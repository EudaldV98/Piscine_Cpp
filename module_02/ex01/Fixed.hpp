/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:53:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/09 10:45:34 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
	private:
		int					raw;
		static const int	fracBits = 8;
		static const int	power = 256;
		static const int	mask = 0xFF;

	public:
		Fixed();
		Fixed(const Fixed &c);
		Fixed(const int f);
		Fixed(const float f);
		Fixed 	&operator=(const Fixed &c);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(const int r);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &f);

#endif
