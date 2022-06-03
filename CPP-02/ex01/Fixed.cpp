/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:26:20 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/25 14:44:59 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits (0);
	return ;
}

Fixed::Fixed (int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits (nb << fraction);
	return ;
}

Fixed &Fixed::operator=(const Fixed &nb)
{
	std::cout << "Copy assignement operator called" << std::endl;
	value = nb.value;
	return (*this);
}

Fixed::Fixed (float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(nb * (1 << fraction));
	return ;
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream &operator << (std::ostream &out, const Fixed &nb)
{
	std::cout << nb.toFloat();
	return (out);
}

Fixed::Fixed (const Fixed &nb)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) &Fixed::operator=(nb);
}

void Fixed::setRawBits (int const raw)
{
	value = raw;
}

int Fixed::getRawBits () const
{
	return (value);
}

int Fixed::toInt () const
{
	return (value >> 8);
}

float Fixed::toFloat () const
{
	return ((float)value / (float)(1 << fraction));
}