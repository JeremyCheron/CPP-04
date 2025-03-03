/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:18:27 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 09:20:18 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria *_inventory[4];
	std::string const _name;
public:
	Character(std::string name);
	Character(Character const &src);
	virtual ~Character();
	Character &operator=(Character const &src);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	AMateria *getMateria(int idx);
};
