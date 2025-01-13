/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:56:51 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/27 14:50:21 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "-wrong_animal-";
    std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
    *this = cpy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &cpy)
{
    std::cout << "WrongAnimal copy assignement operator called!" << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called!" << std::endl;
};

std::string WrongAnimal::getType( void ) const
{
    return (type);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal has no sound!!!!" << std::endl;
}
