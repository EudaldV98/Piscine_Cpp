/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:47:58 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/22 20:26:45 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Brain
{
	private:

	public:
		Brain();
		void		generateIdea() const;
		std::string	identify() const;
		~Brain();
};
