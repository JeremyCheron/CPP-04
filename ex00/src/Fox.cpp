/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fox.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:01:44 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:18:43 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fox.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>

Fox::Fox(void)
{
	this->type = "Fox";
	std::cout
		<< WHITE "Fox created" RESET
		<< std::endl;
}

Fox::Fox(Fox &f) : Animal(f)
{
	this->type = f.type;
	std::cout
		<< WHITE "Fox cloned" RESET
		<< std::endl;
}

Fox::~Fox(void)
{
	std::cout
		<< WHITE "Fox destroyed" RESET
		<< std::endl;
}

Fox &Fox::operator=(const Fox &f)
{
	this->type = f.type;
	return (*this);
}

std::string Fox::getType(void) const
{
	return (this->type);
}

void Fox::makeSound(void)
{
	static std::vector<std::string> sounds;
	if (sounds.empty())
	{
		sounds.push_back("Ring-ding-ding-ding-dingeringeding!");
		sounds.push_back("Wa-pa-pa-pa-pa-pa-pow!");
		sounds.push_back("Hatee-hatee-hatee-ho!");
		sounds.push_back("Joff-tchoff-tchoffo-tchoffo-tchoff!");
		sounds.push_back("Jacha-chacha-chacha-chow!");
		sounds.push_back("Fraka-kaka-kaka-kaka-kow!");
		sounds.push_back("A-hee-ahee ha-hee!");
		sounds.push_back("A-oo-oo-oo-ooo!");
	}

	std::srand(std::time(NULL));
	int index = std::rand() % sounds.size();

	std::cout
		<< WHITE "Fox goes "
		<< sounds[index]
		<< RESET
		<< std::endl;
}
