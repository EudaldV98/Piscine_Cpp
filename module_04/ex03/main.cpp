/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvaquer <jvaquer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:55:15 by jvaquer           #+#    #+#             */
/*   Updated: 2021/01/14 17:07:47 by jvaquer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/*
int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
	return 0; 
}
*/

int main() 
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* moi = new Character("moi");
	
	AMateria* tmp;
	tmp = src->createMateria("Ic");
	moi->equip(tmp);
	tmp = src->createMateria("Cure");
	moi->equip(tmp);
	tmp = src->createMateria("Ice");
	moi->equip(tmp);
	tmp = src->createMateria("Cure");
	moi->equip(tmp);
	tmp = src->createMateria("ice");

	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(2, *bob);
	moi->use(3, *bob);
	moi->use(27, *bob);

	moi->unequip(2);
	moi->unequip(1);
	tmp = src->createMateria("Cure");
	moi->equip(tmp);
	tmp = src->createMateria("Cure");
	moi->equip(tmp);
	
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(2, *bob);
	moi->use(3, *bob);

	
	delete bob;
	delete moi;
	delete src;

	return 0;
}
