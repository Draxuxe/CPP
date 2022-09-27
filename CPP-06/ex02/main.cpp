/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:14:34 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 19:14:34 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include "Base.hpp"

class A : public Base{
	public:
		A ()
		{
			//std::cout << "A constructor called." << std::endl;
			return ;
		}
		~A ()
		{
			//std::cout << "A destructor called." << std::endl;
			return ;
		}
};

class B : public Base{
	public:
		B ()
		{
			//std::cout << "B constructor called." << std::endl;
			return ;
		}
		~B ()
		{
			//std::cout << "B destructor called." << std::endl;
			return ;
		}
};

class C : public Base{
	public:
		C ()
		{
			//std::cout << "C constructor called." << std::endl;
			return ;
		}
		~C ()
		{
			//std::cout << "C destructor called." << std::endl;
			return ;
		}
};

Base *generate ()
{
	int x = rand() % 3 + 1;

	if (x == 1)
		return (new A());
	else if (x == 2)
		return (new B());
	else
		return (new C());
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "He is from class A! (*)" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "He is from class B! (*)" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "He is from class C! (*)" << std::endl;
	return ;
}

void identify(Base &p)
{
	Base test;
	try {
		test = dynamic_cast<A &> (p);
		std::cout << "He from class A! (&)" << std::endl;
	}
	catch (std::bad_cast &bad)
	{
		try {
		test = dynamic_cast<B &> (p);
		std::cout << "He from class B! (&)" << std::endl;
		}
		catch (std::bad_cast &bad)
		{
			try {
			test = dynamic_cast<C &> (p);
			std::cout << "He from class C! (&)" << std::endl;
			}
			catch (std::bad_cast &bad)
			{
				return ;
			}
		}
	}
	return ;
}

int main (int ac, char **av)
{
	srand ((unsigned int)time(0));

	(void) av;
	if (ac != 1)
	{
		std::cout << "No arguments needed." << std::endl;
		return (-1);
	}
	Base *base = generate();
	Base *base1 = generate();
	identify(base);
	identify(*base);
	identify(base1);
	identify(*base1);
	return (0);
}