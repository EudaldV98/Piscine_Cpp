/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:23:37 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/23 12:51:25 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *array, unsigned int length, void(*f)(T const &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}


template <typename T>
void	show(T &elem)
{
	std::cout << "Elem is: " << elem << std::endl;
}

# endif
