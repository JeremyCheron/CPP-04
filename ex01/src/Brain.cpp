/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:29:28 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:47:14 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "No idea";
}

Brain::Brain(Brain &b)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
}

Brain::~Brain()
{
}

Brain &Brain::operator=(const Brain &b)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	else
		return ("Invalid index");
}

void Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Invalid index" << std::endl;
}
