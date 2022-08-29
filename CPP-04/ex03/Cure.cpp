#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure () : AMateria("cure")
{
	std::cout << "Cure constructor called." << std::endl;
	return ;
}

Cure::~Cure ()
{
	std::cout << "Cure destructor called." << std::endl;
	return ;
}

Cure *Cure::clone () const
{
	Cure *cure = new Cure(*this);
	return (cure);
}

void Cure::use (ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}