/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:24:34 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 21:51:04 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		Mats[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
		Mats[i] = NULL;
	*this = cpy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &cpy)
{
	if (this != &cpy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (cpy.Mats[i])
				this->Mats[i] = cpy.Mats[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Mats[i])
			delete this->Mats[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!Mats[i])
		{
			Mats[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (Mats[i]->getType() == type)
		{
			return (Mats[i]->clone());
		}
	}
	return (NULL);
}
