/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mad.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 21:00:20 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/16 21:10:19 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Mad.hpp"

Mad::Mad(std::string name): Victim(name)
{
	std::cout << "AAAAAARGH! WHERE AM I?!" << std::endl;
}

void	Mad::getPolymorphed() const
{
	std::cout << this->Name << " muted into a crazy ostrich" << std::endl;
}

Mad::~Mad()
{
	std::cout << "BYE! LEAVE ME ALONE!" << std::endl;
}
