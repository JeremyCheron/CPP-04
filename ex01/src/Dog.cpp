/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:52:22 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:51:28 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal(), brain(new Brain())
{
	this->type = "Dog";
	std::cout
		<< GREEN "Dog created" RESET
		<< std::endl;
}

Dog::Dog(Dog &d) : Animal(d), brain(NULL)
{
	*this = d;
	std::cout
		<< GREEN "Dog cloned" RESET
		<< std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout
		<< GREEN "Dog destroyed" RESET
		<< std::endl;
}

Dog &Dog::operator=(const Dog &d)
{
	if (this != &d)
	{
		this->type = d.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*d.brain);
	}
	return (*this);
}

std::string Dog::getType(void) const
{
	return (this->type);
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}

void Dog::makeSound(void)
{
	std::cout
		<< GREEN "Dog goes Wouf" RESET
		<< std::endl;
}
