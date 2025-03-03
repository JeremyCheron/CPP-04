/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:44:18 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 15:14:29 by jcheron          ###   ########.fr       */
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

void Animal::printCentered(std::string text, int width)
{
	int	textLength = text.length();
	int	padding = (width - textLength) / 2;
	std::cout
		<< "|"
		<< std::setw(padding) << " "
		<< text
		<< std::setw(width - textLength - padding) << " "
		<< "|"
		<< std::endl;
}

void Animal::printTitle(const std::string className, int totalWidth)
{
	int	classPadding = (totalWidth - className.length()) / 2;

	std::cout
		<< std::setfill('-')
		<< std::setw(classPadding) << ""
		<< className
		<< std::setw(totalWidth - classPadding - className.length()) << ""\
		<< std::setfill(' ')
		<< std::endl;
}

void Animal::displayAnimal(void)
{
	int		totalWidth = 43;
	std::string		className = " Animal ";

	printTitle(className, 45);
	this->printCentered("Type: " + this->getType(), totalWidth);
	printTitle("", 45);
}
