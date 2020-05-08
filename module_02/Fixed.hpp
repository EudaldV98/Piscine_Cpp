/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:53:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/08 13:07:40 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_raw;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &c);
		Fixed &operator=(const Fixed &c);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(const int raw);
};

#endif