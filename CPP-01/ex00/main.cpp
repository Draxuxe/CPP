/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:44:59 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 11:06:50 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie mickael = Zombie ("Mickael");
	Zombie *bob = newZombie ("Bob");
	bob->announce ();
	delete bob;
	mickael.announce ();
	//bob->announce (); // Error bob is undefined
	return (0);
}
