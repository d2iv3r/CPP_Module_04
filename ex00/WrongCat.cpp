/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:58:26 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/01 17:31:07 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called!" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
    std::cout << "WrongCat copy constructor called!" << std::endl;
    *this = cpy;
}

WrongCat& WrongCat::operator=(const WrongCat &cpy)
{
    std::cout << "WrongCat copy assignement operator called!" << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "WrongMeaow WrongMeaow!" << std::endl;
}
