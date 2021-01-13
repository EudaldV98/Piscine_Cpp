/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:41:12 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/13 12:35:55 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
    public:

		TacticalMarine();
		TacticalMarine(const TacticalMarine &tm);
		TacticalMarine	&operator=(const TacticalMarine &tm);
        virtual ISpaceMarine* clone() const;
		virtual void 	battleCry() const;
		virtual void 	rangedAttack() const;
		virtual void 	meleeAttack() const;
		~TacticalMarine();

};

#endif
