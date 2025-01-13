/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:47:16 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/27 16:03:39 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Abst_Animal.hpp"
# include "Brain.hpp"

class Dog : public Abst_Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &cpy);
        Dog& operator=(const Dog &cpy);
        ~Dog();
        void getBrain( void ) const;
        void makeSound( void ) const;
};

#endif
