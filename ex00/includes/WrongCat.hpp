/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:16:42 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/24 11:25:21 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string type;
	public:
		WrongCat();
		WrongCat(WrongCat &c);
		~WrongCat();

		WrongCat &operator=(const WrongCat &c);

		std::string getType() const;
		void makeSound();
};
