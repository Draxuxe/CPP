#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice () : AMateria("ice")
{
	std::cout << "Ice constructor called." << std::endl;
	return ;
}

Ice::~Ice ()
{
	std::cout << "Ice destructor called." << std::endl;
	return ;
}

Ice *Ice::clone () const
{
	Ice *ice = new Ice(*this);
	return (ice);
}

void Ice::use (ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}