/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:45:29 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/30 12:14:57 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main ()
{
	Harl harl = Harl();
	harl.complain("DEBUG");
	std::cout << "-----------------------" << std::endl;
	harl.complain("INFO");
	std::cout << "-----------------------" << std::endl;
	harl.complain("WARNING");
	std::cout << "-----------------------" << std::endl;
	harl.complain("ERROR");
	std::cout << "-----------------------" << std::endl;
	harl.complain("TEST");
	return (0);
}
