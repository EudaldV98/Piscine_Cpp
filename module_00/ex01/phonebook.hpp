/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:26:15 by jvaquer           #+#    #+#             */
/*   Updated: 2020/12/12 12:09:51 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook	{

	private:

		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _mail;
		std::string	_phone;
		std::string	_birth;
		std::string	_meal;
		std::string _underwear;
		std::string	_dark;

	public:
	
		void	ft_add();
		void	ft_search(PhoneBook book[], int i);
		void	ft_print_user(PhoneBook book);
		int		ft_find(PhoneBook book, std::string buf);
};
