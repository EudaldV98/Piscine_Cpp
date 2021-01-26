/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:34:44 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/26 11:54:00 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:

		std::vector<int>	_tab;
		unsigned int		_size;

	public:

		Span();
		Span(unsigned int n);
		Span(Span const &s);

		Span	&operator=(Span const &s);

		void	addNumber(int nb);
		void	addNumber(int start, int end);
		int		shortestSpan();
		int		longestSpan();

		class	NotEnoughElem: public std::exception
		{
			public:

				NotEnoughElem() throw ();
				~NotEnoughElem() throw ();
				NotEnoughElem(NotEnoughElem const & copy) throw();
				NotEnoughElem & operator=(NotEnoughElem const & ope) throw();
				virtual const char* what() const throw();
		};
		
		class NotEnoughSpace : public std::exception
		{
			public:

				NotEnoughSpace() throw ();
				~NotEnoughSpace() throw ();
				NotEnoughSpace(NotEnoughSpace const & copy) throw();
				NotEnoughSpace & operator=(NotEnoughSpace const & ope) throw();
				virtual const char* what() const throw();
		};
		~Span();
};

#endif
