/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:13:13 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/27 15:06:28 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "colors.hpp"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &a);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &a);

		virtual std::string getType() const;
		virtual void makeSound();
		void	printCentered(std::string text, int width);
		void	displayAnimal(void);
		void 	printTitle(const std::string className, int totalWidth);
};
