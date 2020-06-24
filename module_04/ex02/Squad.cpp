/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 00:44:28 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/24 12:06:55 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad():
	Lst(NULL), Count(0)
{
}

Squad::node *Squad::lst_deep_cpy(Squad::node *node)
{
	if (!node)
		return NULL;
	return new Squad::node((Squad::node){ node->sm->clone(), lst_deep_cpy(node->next) });
}

void Squad::lst_destroy(Squad::node *node)
{
	if (!node)
		return;
	delete node->sm;
	lst_destroy(node->next); 
	delete node;
}

int Squad::getCount() const
{
	return Count;
}

ISpaceMarine *Squad::getUnit(int unit) const
{
	Squad::node *node = Lst;
	for (int i = 0; i != unit && node; i++)
		node = node->next;
	return node ? node->sm : NULL;
}

int Squad::push(ISpaceMarine *sm)
{
	if (!sm)
		return Count;
	for (Squad::node *ref = Lst; ref; ref = ref->next)
		if (ref->sm == sm)
			return Count;
	Squad::node **node = &Lst;
	while (*node)
		node = &(*node)->next;
	*node = new Squad::node((Squad::node){ sm, NULL });
	Count++;
	return Count;
}

Squad::~Squad()
{
	lst_destroy(Lst);
	std::cout << "The Squad has been anhilated by a metorite." << std::endl;
}
