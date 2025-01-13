/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:42:21 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 17:30:12 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called!" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = cpy;
}

Cat &Cat::operator=(const Cat &cpy)
{
    std::cout << "Cat copy assignement operator called!" << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "meaow meaow!" << std::endl;
}
