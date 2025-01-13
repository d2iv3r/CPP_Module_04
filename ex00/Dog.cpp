/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:40:55 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 17:30:30 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    std::cout << "Dog copy constructor called!" << std::endl;
    *this = cpy;
}

Dog &Dog::operator=(const Dog &cpy)
{
    std::cout << "Dog copy assignement operator called!" << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "bark bark!" << std::endl;
}
