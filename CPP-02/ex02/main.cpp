/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:54 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/30 16:00:25 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	//COMPARAISON OPERATOR
	if(a < b)
		std::cout << "A is smaller than B." << std::endl;
	else if (a > b)
		std::cout << "A is bigger than B." << std::endl;
	if (a != b)
		std::cout << "A is different from B." << std::endl;
	else if (a == b)
		std::cout << "A is equal to B." << std::endl;
	if(a <= b)
		std::cout << "A is smaller or equal to B." << std::endl;
	else if (a >= b)
		std::cout << "A is bigger or equal to B." << std::endl;
	std::cout << "--------------------------" << std::endl;
	//CALCUL OPERATOR
	std::cout << "A: " << a << std::endl;
	std::cout << "ADDITION: " << a + 5 << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "SOUSTRACTION: " << a - 7 << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "DIVISION: " << a / 0 << std::endl;
	a.setRawBits(10);
	std::cout << "A: " << a << std::endl;
	std::cout << "DIVISION: " << a / a << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "MULTIPLICATION: " << a * 2 << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "--------------------------" << std::endl;
	//INCREMENTATION AND DECREMENTATION OPERATOR
	std::cout << "A: " << a << std::endl;
	std::cout << "INCREMENTATION AFTER: " << a++ << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "DECREMENTATION AFTER: " << a-- << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "INCREMENTATION BEFORE: " << ++a << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "DECREMENTATION BEFORE: " << --a << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "--------------------------" << std::endl;
	//MIN AND MAX FUNCTIONS
	std::cout << "MIN: " << Fixed::min( a, b ) << std::endl;
	std::cout << "MAX: " << Fixed::max( a, b ) << std::endl;
	}
	return 0;
}
