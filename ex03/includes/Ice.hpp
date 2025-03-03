/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:33:51 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 10:11:12 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &i);
	~Ice();

	Ice &operator=(const Ice &i);

	virtual AMateria *clone() const;
	void use(ICharacter &target);
	virtual std::string const &getType() const;
};
