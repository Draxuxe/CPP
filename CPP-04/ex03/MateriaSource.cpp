#include <string>
#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 2; i ++)
		this->storage[i] = 0;
	//std::cout << "MateriaSource is created" << std::endl;
	return ;
}

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource is deleted" << std::endl;
	for (int i = 0; i < 2; i ++)
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
	for (int j = 0; (storage[j] != 0 && j < 2); j ++)
			i ++;
	if (i < 2)
		storage[i] = m->clone();
	if (m)
		delete m;
}

AMateria *MateriaSource::createMateria (std::string const &type)
{
	for (int i = 0; i < 2; i ++)
	{
		if (storage[i])
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

MateriaSource &MateriaSource::operator=(const MateriaSource &ms)
{
	if (this == &ms)
		return (*this);
	for (int i = 0; i < 2; i ++)
	{
		if (ms.storage[i] != 0)
			this->storage[i] = ms.storage[i];
	}
	//std::cout << "MateriaSource copy operator called" << std::endl;
	return (*this);
}