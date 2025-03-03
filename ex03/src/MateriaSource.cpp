/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:29:31 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 11:54:14 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
	std::cout
		<< BLUE "MateriaSource created" RESET
		<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._source[i])
			_source[i] = src._source[i]->clone();
		else
			_source[i] = NULL;
	}
	std::cout
		<< BLUE "MateriaSource created from copy." RESET
		<< std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout
		<< RED "MateriaSource destroyed" RESET
		<< std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
		if (src._source[i])
			_source[i] = src._source[i]->clone();
		else
			_source[i] = NULL;
	}
	std::cout
		<< BLUE "MateriaSource assigned as copy." RESET
		<< std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!_source[i])
		{
			_source[i] = m;
			std::cout
				<< GREEN "Materia "
				<< m->getType()
				<< " learned" RESET
				<< std::endl;
			return;
		}
	}
	std::cout
		<< YELLOW "Materia "
		<< m->getType()
		<< " not learned (4 Materia Max)." RESET
		<< std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (this->_source[i] && (this->_source[i]->getType() != type && i < 4))
		i++;
	if (i >= 4 || !this->_source[i])
	{
		std::cout
			<< YELLOW "Materia does not exist (not learned)." RESET
			<< std::endl;
		return NULL;
	}
	std::cout
		<< YELLOW "Materia "
		<< type
		<< " not created (not learned)." RESET
		<< std::endl;
	return NULL;
}

