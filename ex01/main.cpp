# include "Dog.hpp"
# include "Cat.hpp"
# include "Animal.hpp"

int main()
{
    {const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;}

    {int n = 6;
    Animal *animals[n];
    for (int i = 0; i < 3; i++)
        animals[i] = new Dog();

    for (int i = 3; i < n; i++)
        animals[i] = new Cat();

    for (int i = 0; i < n; i++)
        animals[i]->makeSound();

    for (int i = 0; i < n; i++)
        delete animals[i];}

    {
        Dog *d = new Dog;
        Dog dd = *d;
        delete d;
        dd.getBrain();
    }

    {
        Dog *d = new Dog;
        Dog dd;
        dd = *d;
        delete d;
        dd.getBrain();
    }

    {
        Cat *c = new Cat;
        Cat cc = *c;
        delete(c);
        cc.getBrain();
    }

    {
        Cat *c = new Cat;
        Cat cc;
        cc = *c;
        delete(c);
        cc.getBrain();
    }
    return 0;
}
