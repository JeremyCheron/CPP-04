/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:17:13 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:25:28 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout
		<< MAGENTA "WrongCat created" RESET
		<< std::endl;
}

WrongCat::WrongCat(WrongCat &c) : WrongAnimal(c)
{
	this->type = c.type;
	std::cout
		<< MAGENTA "WrongCat cloned" RESET
		<< std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout
		<< MAGENTA "WrongCat destroyed" RESET
		<< std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
	this->type = c.type;
	return (*this);
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}

void WrongCat::makeSound(void)
{
	std::cout
		<< MAGENTA "WrongCat goes WOUF" RESET
		<< std::endl;
}
