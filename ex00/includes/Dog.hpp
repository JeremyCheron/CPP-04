/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:42:16 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:09:44 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string type;
	public:
		Dog();
		Dog(Dog &d);
		~Dog();

		Dog &operator=(const Dog &d);

		std::string getType() const;
		void makeSound();
};
