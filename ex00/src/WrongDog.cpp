/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:18:55 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:25:05 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongDog.hpp"

WrongDog::WrongDog(void)
{
	this->type = "WrongDog";
	std::cout
		<< CYAN "WrongDog created" RESET
		<< std::endl;
}

WrongDog::WrongDog(WrongDog &d) : WrongAnimal(d)
{
	this->type = d.type;
	std::cout
		<< CYAN "WrongDog cloned" RESET
		<< std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout
		<< CYAN "WrongDog destroyed" RESET
		<< std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &d)
{
	this->type = d.type;
	return (*this);
}

std::string WrongDog::getType(void) const
{
	return (this->type);
}

void WrongDog::makeSound(void)
{
	std::cout
		<< CYAN "WrongDog goes MEOW" RESET
		<< std::endl;
}
