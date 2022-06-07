/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:20:03 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 09:34:29 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	// LIST
	const AAnimal* meta[5];
	// AAnimal test; this is inaccesible and will throw an error
	//			(cannot instantiate animal).

	std::cout << "ANIAML LIST :" << std::endl;
	for (int i = 0; i < 5; i ++)
	{
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	for (int i = 0; i < 5; i ++)
	{
		std::cout << "	" << meta[i]->getType() << std::endl;
		delete meta[i];
	}

	std::cout << std::endl;

	// COPIE
	std::cout << "DEEP COPY :" << std::endl;
	Dog dog1;
	Dog dog2;

	dog1.printIdeas();
	dog2.printIdeas();

	dog1 = dog2;
	dog1.printIdeas();
	dog2.printIdeas();

	std::cout << std::endl;

	// LEAKS
	std::cout << "LEAKS :" << std::endl;
	const AAnimal	*dog = new Dog();
	const AAnimal	*cat = new Cat();

	delete dog;
	delete cat;

	return (0);
}