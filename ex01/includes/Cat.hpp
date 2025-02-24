/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:37:47 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:54:07 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string type;
		Brain *brain;
	public:
		Cat();
		Cat(Cat &c);
		~Cat();

		Cat &operator=(const Cat &c);

		std::string getType() const;
		Brain *getBrain() const;
		void makeSound();
};
