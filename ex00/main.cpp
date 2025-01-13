# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal *meta= new Animal();
    const Animal *j= new Dog();
    const Animal *i= new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << std::endl;
    i->makeSound(); //will out put the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "*************************************************" << std::endl;
    const WrongAnimal *meta2 = new WrongAnimal();
    const WrongAnimal *i2 = new WrongCat();

    std::cout << meta2->getType() << " " << std::endl;
    std::cout << i2->getType() << " " << std::endl;
    i2->makeSound(); //will out put the animal sound!
    meta2->makeSound();
    delete meta2;
    delete i2;

    WrongCat wc;
    wc.makeSound();

    return 0;
}
