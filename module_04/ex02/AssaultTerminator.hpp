/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:44:06 by jvaquer           #+#    #+#             */
/*   Updated: 2020/06/24 11:44:28 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
    public:
        AssaultTerminator();
        virtual AssaultTerminator* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
        virtual ~AssaultTerminator();
};

#endif
