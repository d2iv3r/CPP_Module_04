/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:42:21 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 21:20:08 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called!" << std::endl;
    type = "Cat";
    brain = new Brain();
    brain->setIdeas("I need a mouse!");
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
    std::cout << "Cat copy constructor called!" << std::endl;
    this->brain = new Brain;
    type = "Cat";
    *this = cpy;
}

Cat& Cat::operator=(const Cat &cpy)
{
    std::cout << "Cat copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        delete this->brain;
        brain = new Brain();
        *brain = *(cpy.brain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
    delete(brain);
}

void Cat::getBrain() const
{
    brain->printIdeas();
}

void Cat::makeSound( void ) const
{
    std::cout << "meaow meaow!" << std::endl;
}
