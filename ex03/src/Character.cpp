/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:30:40 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 11:49:01 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout
		<< BLUE "Character "
		<< _name
		<< " created" RESET
		<< std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout
		<< RED "Character "
		<< _name
		<< " destroyed" RESET
		<< std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

Character::Character(Character const &src): _name(src._name + "_copy")
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout
		<< BLUE "Character "
		<< _name
		<< " created as copy of "
		<< src._name
		<< "." RESET
		<< std::endl;
}

Character &Character::operator=(Character const &src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
	}
	std::cout
		<< BLUE "Character "
		<< _name
		<< " assigned as copy of "
		<< src._name
		<< "." RESET
		<< std::endl;
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout
				<< GREEN "Materia "
				<< m->getType()
				<< " equipped by "
				<< _name
				<< "." RESET
				<< std::endl;
			return;
		}
	}
	std::cout
		<< YELLOW "Materia "
		<< m->getType()
		<< " not equipped by "
		<< _name
		<< " (inventory full)." RESET
		<< std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout
			<< YELLOW "Materia not unequipped by "
			<< _name
			<< " (index out of range)." RESET
			<< std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout
			<< YELLOW "Materia not unequipped by "
			<< _name
			<< " (no materia at this index)." RESET
			<< std::endl;
		return;
	}
	if (_inventory[idx])
	{
		AMateria *ptr = (_inventory)[idx];
		std::cout
			<< YELLOW "Materia "
			<< _inventory[idx]->getType()
			<< " unequipped by "
			<< ptr->getType()
			<< "." RESET
			<< std::endl;
		_inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout
			<< YELLOW "Materia not used by "
			<< _name
			<< " (index out of range or no materia at this index)." RESET
			<< std::endl;
		return;
	}
	std::cout
		<< GREEN "Materia "
		<< _inventory[idx]->getType()
		<< " used by "
		<< _name
		<< " on "
		<< target.getName()
		<< "." RESET
		<< std::endl;
	_inventory[idx]->use(target);
}

AMateria *Character::getMateria(int idx)
{
	if (idx < 0 || idx >= 4)
		return NULL;
	return _inventory[idx];
}
