/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:55:54 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/21 10:38:04 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
/*
int main( void )
{
	Fixed a;
	Fixed const b(Fixed(42.42f) / Fixed(0));

	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a / a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}*/

int main( void )
{
	{
		
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	
	std::cout << b << std::endl;
	//std::cout << ++b << std::endl;
	std::cout << b << std::endl;
	//std::cout << b++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::min( a, b ) << std::endl;
	}
	return 0;
}
