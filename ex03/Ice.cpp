/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:05:46 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 20:42:33 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->Type = "ice";
}

Ice::Ice(std::string const &type)
{
	this->Type = type;
}

Ice::Ice(const Ice &cpy)
{
	(void)cpy;
	this->Type = "ice";
}

Ice& Ice::operator=(const Ice &cpy)
{
	(void)cpy;
	return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}
