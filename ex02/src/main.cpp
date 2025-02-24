/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:00:35 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 14:26:00 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

#define ANIMALS 19

void printEndl(void)
{
	std::cout << std::endl;
}

void printMessage(std::string message)
{
	std::cout << message << std::endl;
}

void testArray(void)
{
	AAnimal *tab[ANIMALS + 1];
	tab[ANIMALS] = NULL;
	Dog *d2 = NULL;
	Cat *c2 = NULL;

	printMessage("----- Creating Cats -----");
	for (int i = 0; i < ANIMALS / 2; i++)
		tab[i] = new Cat();
	printEndl();

	printMessage("----- Creating Dogs -----");
	for (int i = ANIMALS / 2; i < ANIMALS; i++)
		tab[i] = new Dog();
	printEndl();

	printMessage("----- Sounds -----");
	for (int i = 0; i < ANIMALS; i++)
		tab[i]->makeSound();
	printEndl();

	printMessage("----- Setting Dog's Ideas -----");
	if (tab[ANIMALS - 1])
	{
		Dog *d = dynamic_cast<Dog *>(tab[ANIMALS - 1]);
		if (d)
		{
			d->getBrain()->setIdea(0, "I'm a dog");
			d->getBrain()->setIdea(1, "I hate cats");
			d->getBrain()->setIdea(2, "I love bones");
		}
		else
			std::cout << "Failed to cast Dog" << std::endl;
	}
	printEndl();

	printMessage("----- Cloning Dog -----");
	if (tab[ANIMALS - 1])
	{
		Dog *d = dynamic_cast<Dog *>(tab[ANIMALS - 1]);
		if (d)
		{
			d2 = new Dog(*d);
		}
		else
			std::cout << "Failed to cast Dog" << std::endl;
	}
	printEndl();

	printMessage("----- Setting Cat's Ideads -----");
	if (tab[0])
	{
		Cat *c = dynamic_cast<Cat *>(tab[0]);
		if (c)
		{
			c->getBrain()->setIdea(0, "I'm a cat");
			c->getBrain()->setIdea(1, "I hate dogs");
			c->getBrain()->setIdea(2, "I love fish");
		}
		else
			std::cout << "Failed to cast Cat" << std::endl;
	}
	printEndl();

	printMessage("----- Cloning Cat -----");
	if (tab[0])
	{
		Cat *c = dynamic_cast<Cat *>(tab[0]);
		if (c)
		{
			c2 = new Cat(*c);
		}
		else
			std::cout << "Failed to cast Cat" << std::endl;
	}
	printEndl();

	printMessage("----- Deleting Animals -----");
	for (int i = 0; i < ANIMALS; i++)
		delete tab[i];
	printEndl();

	printMessage("----- Getting CopyDog's Ideas -----");
	for (int i = 0; i < 3; i++)
		std::cout << d2->getBrain()->getIdea(i) << std::endl;
	printEndl();

	printMessage("----- Deleting CopyDog -----");
	delete d2;
	printEndl();

	printMessage("----- Getting CopyCat's Ideas -----");
	for (int i = 0; i < 3; i++)
		std::cout << c2->getBrain()->getIdea(i) << std::endl;
	printEndl();

	printMessage("----- Deleting CopyCat -----");
	delete c2;
}

// void testDog(void)
// {
// 	printMessage("----- Dog ----");
// 	Dog *d = new Dog();
// 	printEndl();
// 	printMessage("----- Setting ideas ----");
// 	d->getBrain()->setIdea(0, "I'm a dog");
// 	d->getBrain()->setIdea(1, "I hate cats");
// 	d->getBrain()->setIdea(2, "I love bones");
// 	printEndl();

// 	printMessage("----- Cloning Dog ----");
// 	Dog *d2 = new Dog(*d);
// 	printEndl();

// 	printMessage("----- Deleting Dog 1 ----");
// 	delete d;
// 	printEndl();

// 	printMessage("----- Getting ideas from Dog 2 ----");
// 	for (int i = 0; i < 3; i++)
// 		std::cout << d2->getBrain()->getIdea(i) << std::endl;
// 	printEndl();

// 	printMessage("----- Deleting Dog 2 ----");
// 	delete d2;
// 	printEndl();
// }

// void testCat(void)
// {
// 	printMessage("----- Cat ----");
// 	Cat *c = new Cat();
// 	printEndl();
// 	printMessage("----- Setting ideas ----");
// 	c->getBrain()->setIdea(0, "I'm a cat");
// 	c->getBrain()->setIdea(1, "I hate dogs");
// 	c->getBrain()->setIdea(2, "I love fish");
// 	printEndl();

// 	printMessage("----- Cloning Cat ----");
// 	Cat *c2 = new Cat(*c);
// 	printEndl();

// 	printMessage("----- Deleting Cat 1 ----");
// 	delete c;
// 	printEndl();

// 	printMessage("----- Getting ideas from Cat 2 ----");
// 	for (int i = 0; i < 3; i++)
// 		std::cout << c2->getBrain()->getIdea(i) << std::endl;
// 	printEndl();

// 	printMessage("----- Deleting Cat 2 ----");
// 	delete c2;
// 	printEndl();
// }

int main(void)
{
	testArray();
	printEndl();
	// testDog();
	// testCat();
	return 0;
}
