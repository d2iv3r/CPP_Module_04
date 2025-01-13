/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:38:33 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/27 14:50:45 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    type = "-animal-";
    std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = cpy;
}

Animal& Animal::operator=(const Animal &cpy)
{
    std::cout << "Animal copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        this->type = cpy.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called!" << std::endl;
};

std::string Animal::getType( void ) const
{
    return (type);
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal has no sound!!!!!!" << std::endl;
}
