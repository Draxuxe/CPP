/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:44:59 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/30 12:11:38 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie test = Zombie ("Test");
	randomChump ("Mickael");
	Zombie *bob = newZombie ("Bob");
	bob->announce ();
	delete bob;
	test.announce ();
	//Mickael.announce () // Error Mickael was never created;
	//bob->announce (); // Error bob is undefined;
	return (0);
}
