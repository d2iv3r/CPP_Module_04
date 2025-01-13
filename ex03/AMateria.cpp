/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:02:33 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 17:10:26 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	Type = "Unkown";
}

AMateria::AMateria(std::string const &type)
{
	this->Type = type;
}

AMateria::AMateria(const AMateria &cpy)
{
	*this = cpy;
}

AMateria& AMateria::operator=(const AMateria &cpy)
{
	(void)cpy;
	return *this;
}

std::string const &AMateria::getType() const
{
	return (this->Type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << Type << " AMateria target " << target.getName() << " !" << std::endl;
}

AMateria::~AMateria()
{
}
