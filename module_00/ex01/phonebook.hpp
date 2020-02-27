/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:26:15 by jvaquer           #+#    #+#             */
/*   Updated: 2020/02/27 17:41:03 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook	{

	private:

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string mail;
		std::string	phone;
		std::string	birth;
		std::string	meal;
		std::string underwear;
		std::string	dark;

	public:
	
		void	ft_add();
		void	ft_search(PhoneBook book[], int i);
};
