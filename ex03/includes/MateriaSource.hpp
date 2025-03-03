/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:28:50 by jcheron           #+#    #+#             */
/*   Updated: 2025/03/03 09:29:13 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_source[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	virtual ~MateriaSource();
	MateriaSource &operator=(MateriaSource const &src);
	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};
