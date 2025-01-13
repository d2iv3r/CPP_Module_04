/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:05:24 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 20:41:52 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->Type = "cure";
}

Cure::Cure(std::string const &type)
{
	this->Type = type;
}

Cure::Cure(const Cure &cpy)
{
	(void)cpy;
	this->Type = "cure";
}

Cure& Cure::operator=(const Cure &cpy)
{
	(void)cpy;
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}

