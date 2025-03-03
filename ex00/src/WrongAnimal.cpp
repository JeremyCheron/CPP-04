/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:14:02 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 15:14:20 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("No type")
{
	std::cout
		<< YELLOW "WrongAnimal created" RESET
		<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &a)
{
	this->type = a.type;
	std::cout
		<< YELLOW "WrongAnimal cloned" RESET
		<< std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout
		<< YELLOW "WrongAnimal destructed" RESET
		<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	this->type = a.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void)
{
	std::cout
		<< YELLOW "WrongAnimal sound" RESET
		<< std::endl;
}

void WrongAnimal::printCentered(std::string text, int width)
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

std::string toString(unsigned int value)
{
	std::ostringstream oss;
	oss << value;
	return (oss.str());
}

void WrongAnimal::printTitle(const std::string className, int totalWidth)
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

void WrongAnimal::displayAnimal(void)
{
	int totalWidth = 43;
	std::string className = " WrongAnimal ";
	printTitle(className, 45);
	this->printCentered("Type: " + this->getType(), totalWidth);
	printTitle("", 45);
}
