/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:00:35 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:24:12 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"
#include "../includes/Fox.hpp"

int main(void)
{
	std::cout << "----- Animal -----" << std::endl;
	Animal *a = new Animal();
	std::cout << a->getType() << std::endl;
	a->makeSound();
	delete a;

	std::cout << "----- Dog -----" << std::endl;
	Animal *d = new Dog();
	std::cout << d->getType() << std::endl;
	d->makeSound();
	delete d;

	std::cout << "----- Cat -----" << std::endl;
	Animal *c = new Cat();
	std::cout << c->getType() << std::endl;
	c->makeSound();
	delete c;

	std::cout << "----- WrongAnimal -----" << std::endl;
	WrongAnimal *wa = new WrongAnimal();
	std::cout << wa->getType() << std::endl;
	wa->makeSound();
	delete wa;

	std::cout << "----- WrongCat -----" << std::endl;
	WrongAnimal *wc = new WrongCat();
	std::cout << wc->getType() << std::endl;
	wc->makeSound();
	delete wc;

	std::cout << "----- WrongDog -----" << std::endl;
	WrongAnimal *wd = new WrongDog();
	std::cout << wd->getType() << std::endl;
	wd->makeSound();
	delete wd;

	std::cout << "----- Go Wild -----" << std::endl;
	std::cout << "----- Fox ----" << std::endl;
	Animal *f = new Fox();
	std::cout << f->getType() << std::endl;
	std::cout << "What does the fox say ?" << std::endl;
	f->makeSound();
	delete f;

	return 0;
}
