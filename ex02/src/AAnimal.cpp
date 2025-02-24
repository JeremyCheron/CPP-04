/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:44:18 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 14:19:19 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : type("No type")
{
	std::cout
		<< BLUE "AAnimal created" RESET
		<< std::endl;
}

AAnimal::AAnimal(AAnimal &a)
{
	this->type = a.type;
	std::cout
		<< BLUE "AAnimal cloned" RESET
		<< std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout
		<< BLUE "AAnimal destructed" RESET
		<< std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &a)
{
	this->type = a.type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void AAnimal::makeSound(void)
{
	std::cout
		<< BLUE "AAnimal sound" RESET
		<< std::endl;
}
