/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:26:20 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/30 13:40:11 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed ()
{
	//std::cout << "Default constructor called" << std::endl;
	setRawBits (0);
	return ;
}

Fixed::Fixed (int const nb)
{
	//std::cout << "Int constructor called" << std::endl;
	setRawBits (nb << fraction);
	return ;
}

Fixed::Fixed (const Fixed &nb)
{
	//std::cout << "Copy constructor called" << std::endl;
	(void) &Fixed::operator=(nb);
}

Fixed::Fixed (float const nb)
{
	//std::cout << "Float constructor called" << std::endl;
	value = roundf(nb * (1 << fraction));
	return ;
}

Fixed::~Fixed ()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator= (const Fixed &nb)
{
	if (this == &nb)
		return (*this);
	//std::cout << "Copy assignement operator called" << std::endl;
	value = nb.value;
	return (*this);
}

bool Fixed::operator>(const Fixed &nb)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (value > nb.value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &nb)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (value < nb.value)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &nb)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (value >= nb.value)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &nb)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (value <= nb.value)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &nb)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (value != nb.value)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &nb)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (value == nb.value)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &nb) const
{
	//std::cout << "Copy assignement operator called" << std::endl;
	Fixed result;

	result.value = value + (nb.value);
	return (result);
}

Fixed Fixed::operator-(const Fixed &nb) const
{
	//std::cout << "Copy assignement operator called" << std::endl;
	Fixed result;

	result.value = value - (nb.value);
	return (result);
}

Fixed Fixed::operator*(const Fixed &nb) const 
{
	//std::cout << "Copy assignement operator called" << std::endl;
	Fixed result;

	result.value = value * (nb.value / (1 << fraction));
	return (result);
}

Fixed Fixed::operator/(const Fixed &nb) const
{
	//std::cout << "Copy assignement operator called" << std::endl;
	Fixed result;

	result.value = (value * (1 << fraction)) / nb.value;
	return (result);
}

Fixed &Fixed::operator++()
{
	//std::cout << "Copy assignement operator called" << std::endl;
	value++;
	return (*this);
}

Fixed Fixed::operator++(int x)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	(void) x;
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed &Fixed::operator--()
{
	//std::cout << "Copy assignement operator called" << std::endl;
	if (value - 1 > 1)
		value--;
	return (*this);
}

Fixed Fixed::operator--(int x)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	(void) x;
	Fixed temp = *this;
	if (value - 1 > 1)
		--*this;
	return (temp);
}

std::ostream &operator << (std::ostream &out, const Fixed &nb)
{
	std::cout << nb.toFloat();
	return (out);
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

Fixed Fixed::min (Fixed &a, Fixed &b)
{
	if (a.value < b.value)
		return (a);
	return (b);
}

Fixed Fixed::min (const Fixed &a, const Fixed &b)
{
	if (a.value < b.value)
		return (a);
	return (b);
}

Fixed Fixed::max (Fixed &a, Fixed &b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}

Fixed Fixed::max (const Fixed &a, const Fixed &b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}