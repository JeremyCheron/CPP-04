/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:44:18 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:09:21 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) : type("No type")
{
	std::cout
		<< BLUE "Animal created" RESET
		<< std::endl;
}

Animal::Animal(Animal &a)
{
	this->type = a.type;
	std::cout
		<< BLUE "Animal cloned" RESET
		<< std::endl;
}

Animal::~Animal(void)
{
	std::cout
		<< BLUE "Animal destructed" RESET
		<< std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
	this->type = a.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void)
{
	std::cout
		<< BLUE "Animal sound" RESET
		<< std::endl;
}
