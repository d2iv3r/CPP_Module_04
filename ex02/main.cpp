# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    // Abst_Animal test;

    {const Abst_Animal *j= new Dog();
    const Abst_Animal *i= new Cat();
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;}

    {int n = 6;
    Abst_Animal *animals[n];
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
