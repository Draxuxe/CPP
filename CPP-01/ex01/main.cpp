/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:04:05 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/30 12:12:57 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	{
	Zombie mickael = Zombie ("Mickael");
	Zombie *bob = zombieHorde (5, "Bob");
	mickael.announce ();
	for (int i = 0; i < 5; i ++)
		bob[i].announce ();
	delete[] bob;
	}
	std::cout << "-------------------" << std::endl;
	{
	Zombie *plop = zombieHorde (3, "Plop");
	for (int i = 0; i < 3; i ++)
		plop[i].announce ();
	delete[] plop;
	}
	return (0);
}