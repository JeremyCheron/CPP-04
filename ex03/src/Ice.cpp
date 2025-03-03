/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:35:15 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 10:10:31 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout
		<< CYAN "Ice created" RESET
		<< std::endl;
}

Ice::Ice(const Ice &i) : AMateria(i)
{
	std::cout
		<< CYAN "Ice cloned" RESET
		<< std::endl;
}

Ice::~Ice(void)
{
	std::cout
		<< CYAN "Ice destructed" RESET
		<< std::endl;
}

Ice &Ice::operator=(const Ice &i)
{
	this->_type = i._type;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout
		<< CYAN "* shoots an ice bolt at " << target.getName() << " *" RESET
		<< std::endl;
}

const std::string &Ice::getType() const
{
	return (this->_type);
}
