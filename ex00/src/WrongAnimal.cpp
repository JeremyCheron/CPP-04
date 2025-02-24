/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:14:02 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:25:54 by jcheron          ###   ########.fr       */
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
