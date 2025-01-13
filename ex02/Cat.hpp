/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:42:09 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/27 16:03:20 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Abst_Animal.hpp"
# include "Brain.hpp"

class Cat : public Abst_Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &cpy);
        Cat& operator=(const Cat &cpy);
        ~Cat();
        void getBrain( void ) const;
        void makeSound( void ) const;
};

#endif
