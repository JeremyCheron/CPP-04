/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:18:42 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:25:16 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	private:
		std::string type;
	public:
		WrongDog();
		WrongDog(WrongDog &d);
		~WrongDog();

		WrongDog &operator=(const WrongDog &d);

		std::string getType() const;
		void makeSound();
};
