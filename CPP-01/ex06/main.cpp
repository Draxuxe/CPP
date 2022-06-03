/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:05:26 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/24 18:09:09 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter one level of Harl" << std::endl;
		return (-1);
	}
	else
	{
		Harl harl = Harl ();
		harl.complain(std::string(av[1]));
	}
	return (0);
}