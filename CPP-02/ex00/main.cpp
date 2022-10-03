/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:26:15 by lfilloux          #+#    #+#             */
/*   Updated: 2022/10/03 11:37:55 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	a.setRawBits(5);
	std::cout << "A: " << a.getRawBits() << std::endl;
	std::cout << "--------------------" << std::endl;
	Fixed b(a);
	std::cout << "B: " << b.getRawBits() << std::endl;
	b.setRawBits(10);
	std::cout << "--------------------" << std::endl;
	Fixed c;
	c = b;
	std::cout << "C: " << c.getRawBits() << std::endl;
	c.setRawBits(15);
	std::cout << "--------------------" << std::endl;
	std::cout << "A: " << a.getRawBits() << std::endl;
	std::cout << "B: " << b.getRawBits() << std::endl;
	std::cout << "C: " << c.getRawBits() << std::endl;
	return (0);
}
