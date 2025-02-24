/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:24:22 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:09:04 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "colors.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal &a);
	virtual ~Animal();

	Animal &operator=(const Animal &a);

	virtual std::string getType() const;
	virtual void makeSound();
};
