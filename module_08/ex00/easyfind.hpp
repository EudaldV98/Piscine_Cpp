/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:15:51 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/26 11:21:46 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <string>
# include <iostream>

template <typename T>
bool	easyfind(T	&container, int n)
{
	typename	T::const_iterator it = std::find(container.begin(), container.end(), n);
	return	it != container.end() ? true : false ;
}

#endif
