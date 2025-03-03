/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:43:20 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 09:56:14 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout
		<< GREEN "Cure created" RESET
		<< std::endl;
}

Cure::Cure(const Cure &c) : AMateria(c)
{
	std::cout
		<< GREEN "Cure cloned" RESET
		<< std::endl;
}

Cure::~Cure(void)
{
	std::cout
		<< GREEN "Cure destructed" RESET
		<< std::endl;
}

Cure &Cure::operator=(const Cure &c)
{
	this->_type = c._type;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout
		<< GREEN "* heals " << target.getName() << "'s wounds *" RESET
		<< std::endl;
}
