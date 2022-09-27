/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:44:59 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/19 10:14:51 by lfilloux         ###   ########.fr       */
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
	//mickael.announce () // Error Mickael was on the stack but was already deleted;
	//bob->announce (); // Error bob is undefined;
	return (0);
}
