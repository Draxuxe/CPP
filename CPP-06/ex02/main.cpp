#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.cpp"
#include "B.cpp"
#include "C.cpp"

Base *generate ()
{
	Base *base;
	int x = rand() % 3 + 1;

	std::cout << x << std::endl;
	if (x == 0)
		base = new A();
	else if (x == 1)
		base = new B();
	else if (x == 2)
		base = new C();
	return (base);
}

int main (int ac, char **av)
{
	(void) av;
	if (ac != 1)
	{
		std::cout << "No arguments needed." << std::endl;
		return (-1);
	}
	Base *base = generate();
	(void) base;
	return (0);
}