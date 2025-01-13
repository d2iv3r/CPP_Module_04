#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	{IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;}

	/////////////// CHARCATER TEST DEEP COPY /////////////////
	{Character *me = new Character("me");
	Character other;
	me->equip(new Ice);
	me->equip(new Ice);
	me->equip(new Cure);
	me->equip(new Cure);
	for (int i = 0; i < 4; i++)
		me->use(i, *me);
	other = *me;
	delete me;
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		other.use(i, other);}

	////////////// MATERIASOURCE TEST DEEP COPY /////////////////
	{MateriaSource *src1 = new MateriaSource;
	Character test("test");
	src1->learnMateria(new Ice);
	src1->learnMateria(new Cure);
	MateriaSource src2 = *src1;
	delete(src1);

	AMateria *tmp = src2.createMateria("ice");
	tmp->use(test);
	delete tmp;
	tmp = src2.createMateria("cure");
	tmp->use(test);
	delete tmp;
	}

	{Ice ice;
	Cure cure;
	Character test("test");
	AMateria *i = ice.clone();
	i->use(test);
	delete i;
	AMateria *c = cure.clone();
	c->use(test);
	delete c;}

	return (0);
}

