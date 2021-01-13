/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 00:44:28 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 13:14:57 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::node *Squad::lst_deep_cpy(Squad::node *node)
{
	if (!node)
		return NULL;
	return new Squad::node((Squad::node){ node->_sm->clone(), lst_deep_cpy(node->_next) });
}

void Squad::lst_destroy(Squad::node *node)
{
	if (!node)
		return;
	delete node->_sm;
	lst_destroy(node->_next); 
	delete node;
}

Squad::Squad(): _lst(NULL), _count(0)
{
}

Squad::Squad(const Squad &s): _lst(lst_deep_cpy(s._lst)), _count(s._count)
{
}

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine *Squad::getUnit(int unit) const
{
	Squad::node *node = _lst;
	for (int i = 0; i != unit && node; i++)
		node = node->_next;
	return node ? node->_sm : NULL;
}

int Squad::push(ISpaceMarine *sm)
{
	if (!sm)
		return _count;
	for (Squad::node *ref = _lst; ref; ref = ref->_next)
		if (ref->_sm == sm)
			return _count;
	Squad::node **node = &_lst;
	while (*node)
		node = &(*node)->_next;
	*node = new Squad::node((Squad::node){ sm, NULL });
	_count++;
	return _count;
}

Squad::~Squad()
{
	lst_destroy(_lst);
	std::cout << "The Squad has been anhilated by a metorite." << std::endl;
}
