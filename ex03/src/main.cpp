/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:38:18 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 11:49:11 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

int main(void)
{
	std::cout
		<< std::endl
		<< "====================" << std::endl
		<< "|   Constructor    |" << std::endl
		<< "====================" << std::endl
		<< std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");

	std::cout
		<< std::endl
		<< "====================" << std::endl
		<< "|  Create Materia  |" << std::endl
		<< "====================" << std::endl
		<< std::endl;
	AMateria *tmp;
	AMateria *tmp1;
	AMateria *tmp2;
	AMateria *tmp3;
	AMateria *tmp4;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp = src->createMateria("fire");
	me->equip(tmp);


	std::cout
		<< std::endl
		<< "====================" << std::endl
		<< "|      Use         |" << std::endl
		<< "====================" << std::endl
		<< std::endl;
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(-4, *bob);
	me->use(18, *bob);

	std::cout
		<< std::endl
		<< "====================" << std::endl
		<< "|    Copy/Assign    |" << std::endl
		<< "====================" << std::endl
		<< std::endl;
	Character *toto = new Character("Toto");
	tmp2 = src->createMateria("cure");
	toto->equip(tmp2);
	tmp3 = src->createMateria("ice");
	toto->equip(tmp3);
	tmp4 = src->createMateria("lightning");
	toto->equip(tmp4);
	Character *toto_copy = new Character(*toto);


	std::cout
		<< std::endl
		<< "====================" << std::endl
		<< "|    Use Copy       |" << std::endl
		<< "====================" << std::endl
		<< std::endl;
	toto->unequip(0);
	tmp4 = toto_copy->getMateria(1);
	toto_copy->unequip(1);
	delete tmp4;

	tmp = src->createMateria("cure");
	toto_copy->equip(tmp);
	tmp1 = src->createMateria("ice");
	toto_copy->equip(tmp1);

	toto->use(0, *bob);
	toto->use(1, *bob);
	toto->use(2, *bob);
	toto->use(3, *bob);

	toto_copy->use(0, *bob);
	toto_copy->use(1, *bob);
	toto_copy->use(2, *bob);
	toto_copy->use(3, *bob);


	std::cout
		<< std::endl
		<< "====================" << std::endl
		<< "|     Unequip      |" << std::endl
		<< "====================" << std::endl
		<< std::endl;
	me->unequip(-1);
	me->unequip(18);
	me->unequip(3);

	me->use(1, *toto);
	me->unequip(1);
	me->use(1, *toto);


	std::cout
		<< std::endl
		<< "====================" << std::endl
		<< "|    Destructor     |" << std::endl
		<< "====================" << std::endl
		<< std::endl;
	delete bob;
	delete me;
	delete src;
	delete toto;
	delete toto_copy;
	delete tmp1;
	delete tmp2;

	return (0);
}
