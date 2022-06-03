/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:04:05 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 11:26:04 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie mickael = Zombie ("Mickael");
	Zombie *bob = zombieHorde (10, "Bob");
	mickael.announce ();
	for (int i = 0; i < 10; i ++)
		bob[i].announce ();
	delete[] bob;
	/*
	Zombie *plop = zombieHorde (3, "Plop");
	for (int i = 0; i < 3; i ++)
		plop[i].announce ();
	delete[] plop;
	*/
	return (0);
}