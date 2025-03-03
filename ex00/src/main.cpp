/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:00:35 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 15:15:41 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"
#include "../includes/Fox.hpp"

void printDashedLine(int totalWidth)
{
	std::cout
		<< std::setfill('-')
		<< std::setw(totalWidth)
		<< std::setfill(' ')
		<< std::endl;
}

int main(void)
{
	Animal *a = new Animal();
	a->displayAnimal();
	a->makeSound();
	delete a;

	printDashedLine(45);

	Animal *d = new Dog();
	d->displayAnimal();
	d->makeSound();
	delete d;

	Animal *c = new Cat();
	c->displayAnimal();
	c->makeSound();
	delete c;

	WrongAnimal *wa = new WrongAnimal();
	wa->displayAnimal();
	wa->makeSound();
	delete wa;

	WrongAnimal *wc = new WrongCat();
	wc->displayAnimal();
	wc->makeSound();
	delete wc;

	WrongAnimal *wd = new WrongDog();
	wd->displayAnimal();
	wd->makeSound();
	delete wd;

	std::cout << "----- Go Wild -----" << std::endl;
	Animal *f = new Fox();
	f->displayAnimal();
	std::cout << "What does the fox say ?" << std::endl;
	f->makeSound();
	delete f;

	return 0;
}
