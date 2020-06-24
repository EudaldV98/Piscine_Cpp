/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 00:44:25 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/24 11:54:28 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
    private:
        struct node {
            ISpaceMarine *sm;
            node *next;
        };

        node	*Lst;
        int		Count;

        node *lst_deep_cpy(node *node);
        void lst_destroy(node *node);

    public:
        Squad();
        virtual int getCount() const;
        virtual ISpaceMarine *getUnit(int unit) const;
        virtual int push(ISpaceMarine *sm);
        virtual ~Squad();
};

#endif