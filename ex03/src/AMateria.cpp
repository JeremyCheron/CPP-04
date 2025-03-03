/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:34:38 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 10:41:52 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(void) : _type("No type")
{
	std::cout
		<< YELLOW "AMateria "
		<< this->_type
		<< " created" RESET
		<< std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout
		<< YELLOW "AMateria created" RESET
		<< std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	this->_type = src._type;
	std::cout
		<< YELLOW "AMateria cloned" RESET
		<< std::endl;
}

AMateria::~AMateria(void)
{
	std::cout
		<< YELLOW "AMateria destructed" RESET
		<< std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout
		<< YELLOW "AMateria used" RESET
		<< std::endl;
}
