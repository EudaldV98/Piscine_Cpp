/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:51:07 by jvaquer           #+#    #+#             */
/*   Updated: 2020/04/23 23:57:52 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

std::string Human::identify() const
{
    return  myBrain.identify();
}

Brain   &Human::getBrain()
{
    return myBrain;
}

Human::~Human()
{
}
