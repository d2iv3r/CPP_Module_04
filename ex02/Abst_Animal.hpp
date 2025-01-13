/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abst_Animal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:37:59 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/27 16:02:18 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABST_ANIMAL_HPP
#define ABST_ANIMAL_HPP

# include <iostream>

class Abst_Animal
{
    protected:
        std::string type;
    public:
        Abst_Animal();
        Abst_Animal(const Abst_Animal &cpy);
        Abst_Animal& operator=(const Abst_Animal &cpy);
        virtual ~Abst_Animal();
        std::string getType( void ) const;
        virtual void makeSound( void ) const = 0;
};

#endif
