/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fox.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:00:59 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 12:01:32 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Fox : public Animal
{
	public:
		Fox();
		Fox(Fox &f);
		~Fox();

		Fox &operator=(const Fox &f);

		std::string getType() const;
		void makeSound();
};
