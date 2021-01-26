/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 23:07:44 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/25 00:43:18 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:

		T		*_array;
		int		_size;

	public:

		Array(): _array(new T[0]), _size(0){};
		Array(unsigned int n): _array(new T[n]), _size(n) {};

		Array(Array const &a){
			if (this != &a)
			{
				this->_size = a._size;
				this->_array = new T[_size];
				for (int i = 0; i < _size; i++)
					this->_array[i] = a._array[i];
			}
		}

		~Array() {
			delete[] this->_array;
		};

		class ErrorIndex: public std::exception
		{
			public:
				virtual const char	*what() const throw() {
					return ("Error : index out of bonds\n");
				};
		};

		Array	&operator=(Array const &a) {
			if (this != &a)
			{
				delete[] this->_array;
				this->_size = a._size;
				this->_array = new T[_size];
				for (int i = 0; i < a._size; i++)
					this->_array[i] = a._array[i];
			}
			return (*this);
		};
		
		T		&operator[](int i)
		{
			if (i < 0 || i >= _size)
				throw Array::ErrorIndex();
			return (_array[i]);
		};

		int		size(void) const {
			return (_size);
		};
};

#endif
