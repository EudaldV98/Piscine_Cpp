/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:53:21 by jvaquer           #+#    #+#             */
/*   Updated: 2020/05/08 23:55:26 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:

		int					raw;
		static const int	fracBits = 8;

	public:

		Fixed();
		Fixed(const Fixed &c);
		Fixed &operator=(const Fixed &c);
		int		getRawBits() const;
		void	setRawBits(const int r);
		~Fixed();

};

#endif
