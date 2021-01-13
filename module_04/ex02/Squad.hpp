/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 00:44:25 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 13:07:01 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
    private:

		struct node {
            ISpaceMarine *_sm;
            node *_next;
        };

        node	*_lst;
        int		_count;

    public:

		Squad();
		Squad(const Squad &s);
		Squad	&operator=(const Squad &s);
        virtual int getCount() const;
        virtual ISpaceMarine *getUnit(int unit) const;
        virtual int push(ISpaceMarine *sm);
        
		node *lst_deep_cpy(node *node);
        void lst_destroy(node *node);
        
		~Squad();
};

#endif
