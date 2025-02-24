/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:49:12 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:56:39 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout
		<< RED "Cat created" RESET
		<< std::endl;
}

Cat::Cat(Cat &c) : Animal(c)
{
	this->type = c.type;
	std::cout
		<< RED "Cat cloned" RESET
		<< std::endl;
}

Cat::~Cat(void)
{
	std::cout
		<< RED "Cat destroyed" RESET
		<< std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
	this->type = c.type;
	return (*this);
}

void Cat::makeSound(void)
{
	std::cout
		<< RED "Cat goes Meow" RESET
		<< std::endl;
}
