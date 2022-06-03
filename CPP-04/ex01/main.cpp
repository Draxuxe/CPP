/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:20:03 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:51:14 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta[5];
	Brain dogBrain;
	Brain catBrain;

	for (int i = 0; i < 5; i ++)
	{
		//if (i % 2 == 0)
		//	meta[i] = new Dog();
		//else
			meta[i] = new Cat();
	}
	//dogBrain = meta[0]->getBrain();
	catBrain = meta[1]->getBrain();
	std::cout << dogBrain.ideas[0] << std::endl;
	std::cout << catBrain.ideas[0] << std::endl;
	std::cout << "LIST :" << std::endl;
	for (int i = 0; i < 5; i ++)
	{
		std::cout << "	" << meta[i]->getType() << std::endl;
		delete meta[i];
	}
	return 0;
}