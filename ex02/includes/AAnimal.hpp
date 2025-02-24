/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:24:22 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 14:25:02 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "colors.hpp"

class AAnimal
{
protected:
	std::string type;
	AAnimal();
	AAnimal(AAnimal &a);
public:
	virtual ~AAnimal();

	AAnimal &operator=(const AAnimal &a);

	virtual std::string getType() const;
	virtual void makeSound();
};
