/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:31:17 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 10:42:00 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "colors.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria();
	virtual std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};
