/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:49:12 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:55:17 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal(), brain(new Brain())
{
	this->type = "Cat";
	std::cout
		<< RED "Cat created" RESET
		<< std::endl;
}

Cat::Cat(Cat &c) : Animal(c), brain(NULL)
{
	*this = c;
	std::cout
		<< RED "Cat cloned" RESET
		<< std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout
		<< RED "Cat destroyed" RESET
		<< std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
	if (this != &c)
	{
		this->type = c.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*c.brain);
	}
	return (*this);
}

std::string Cat::getType(void) const
{
	return (this->type);
}

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}

void Cat::makeSound(void)
{
	std::cout
		<< RED "Cat goes Meow" RESET
		<< std::endl;
}
