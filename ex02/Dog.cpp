/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:40:55 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 20:32:27 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
    type = "Dog";
    brain = new Brain();
    brain->setIdeas("I need a cat!");
}

Dog::Dog(const Dog &cpy) : Abst_Animal(cpy)
{
    std::cout << "Dog copy constructor called!" << std::endl;
    this->brain = new Brain;
    *this = cpy;
}

Dog& Dog::operator=(const Dog &cpy)
{
    std::cout << "Dog copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        delete this->brain;
        this->type = cpy.type;
        brain = new Brain;
        *brain = *cpy.brain;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
    delete(brain);
}

void Dog::getBrain() const
{
    brain->printIdeas();
}

void Dog::makeSound( void ) const
{
    std::cout << "bark bark!" << std::endl;
}
