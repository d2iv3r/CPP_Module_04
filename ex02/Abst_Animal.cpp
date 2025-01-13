/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abst_Animal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:38:33 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/27 16:02:59 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Abst_Animal.hpp"

Abst_Animal::Abst_Animal()
{
    type = "-Abst_animal-";
    std::cout << "Abst_Animal default constructor called!" << std::endl;
}

Abst_Animal::Abst_Animal(const Abst_Animal &cpy)
{
    std::cout << "Abst_Animal copy constructor called!" << std::endl;
    *this = cpy;
}

Abst_Animal& Abst_Animal::operator=(const Abst_Animal &cpy)
{
    std::cout << "Abst_Animal copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        this->type = cpy.type;
    }
    return (*this);
}

Abst_Animal::~Abst_Animal()
{
    std::cout << "Abst_Animal Destructor called!" << std::endl;
};

std::string Abst_Animal::getType( void ) const
{
    return (type);
}

void Abst_Animal::makeSound( void ) const
{
    std::cout << "Abst_Animal has no sound!!!!!!" << std::endl;
}
