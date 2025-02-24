/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:52:22 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:56:46 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout
		<< GREEN "Dog created" RESET
		<< std::endl;
}

Dog::Dog(Dog &d) : Animal(d)
{
	this->type = d.type;
	std::cout
		<< GREEN "Dog cloned" RESET
		<< std::endl;
}

Dog::~Dog(void)
{
	std::cout
		<< GREEN "Dog destroyed" RESET
		<< std::endl;
}

Dog &Dog::operator=(const Dog &d)
{
	this->type = d.type;
	return (*this);
}

std::string Dog::getType(void) const
{
	return (this->type);
}

void Dog::makeSound(void)
{
	std::cout
		<< GREEN "Dog goes Wouf" RESET
		<< std::endl;
}
