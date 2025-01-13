/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:20:42 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/27 15:24:32 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called!" << std::endl;
};

Brain::Brain(const Brain &cpy)
{
    std::cout << "Brain copy constructor called!" << std::endl;
    *this = cpy;
};

Brain& Brain::operator=(const Brain &cpy)
{
    std::cout << "Brain copy assignement operator called!" << std::endl;
    if (this != &cpy)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = cpy.ideas[i];
    }
    return (*this);
};

void Brain::setIdeas(std::string ids)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = ids;
};

void Brain::printIdeas( void ) const
{
    for (int i = 0; i < 100; i++)
        std::cout << ideas[i] << std::endl;

};

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
};
