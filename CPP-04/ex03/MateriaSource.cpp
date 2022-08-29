#include <string>
#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource is created" << std::endl;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource is deleted" << std::endl;
		for (int i = 0; i < 4; i ++)
	{
		if (storage[i])
			delete storage[i];
	}
	return ;
}

void MateriaSource::learnMateria (AMateria *m)
{
	int i;

	i = 0;
	while (i < 4 && storage[i] != 0)
		i ++;
	if (i < 4)
		storage[i] = m->clone();
	delete m;
}

AMateria *MateriaSource::createMateria (std::string const &type)
{
	for (int i = 0; i < 4 && storage[i]; i ++)
	{
		if (storage[i]->getType() == type)
		{
			if (type == "ice")
			{
				AMateria *ice = new Ice();
				return (ice);
			}
			else if (type == "cure")
			{
				AMateria *cure = new Cure();
				return (cure);
			}
			else
				return (0);
		}
	}
	return (0);
}