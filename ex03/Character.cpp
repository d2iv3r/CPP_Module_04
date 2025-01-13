/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:11:48 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 21:04:01 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	Name = "unkown";
	for (int i = 0; i < 4; i++)
	{
		Slots[i] = NULL;
		Unequiped[i] = 0;
	}
}

Character::Character(std::string n)
{
	for (int i = 0; i < 4; i++)
	{
		Slots[i] = NULL;
		Unequiped[i] = 0;
	}
	this->Name = n;
}

std::string const &Character::getName() const
{
	return (this->Name);
}

Character::Character(const Character &cpy)
{
	*this = cpy;
}

Character& Character::operator=(const Character &cpy)
{
	if (this != &cpy)
	{
		this->Name = cpy.getName();
		for (int i = 0; i < 4; i++)
		{
			this->Slots[i] = cpy.Slots[i]->clone();
			this->Unequiped[i] = cpy.Unequiped[i];
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Unequiped[i] == -1 || this->Unequiped[i] == 1)
			delete this->Slots[i];
	}
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (Unequiped[i] == -1)
		{
			delete Slots[i];
			Slots[i] = m;
			Unequiped[i] = 1;
			return ;
		}
		else if (Unequiped[i] == 0)
		{
			this->Slots[i] = m;
			this->Unequiped[i] = 1;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx <= 3 && idx >= 0)
		Unequiped[idx] = -1;
}

void Character::use(int idx, ICharacter &target)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && Unequiped[idx] == 1)
		{
			this->Slots[i]->use(target);
			return ;
		}
	}
}
