/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:26:20 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/25 13:10:25 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits (0);
	return ;
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed (const Fixed &nb)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) &Fixed::operator=(nb);
}

Fixed &Fixed::operator=(const Fixed &nb)
{
	std::cout << "Copy assignement operator called" << std::endl;
	setRawBits (nb.value);
	value = getRawBits();
	return (*this);
}

void Fixed::setRawBits (int const raw)
{
	value = raw;
}

int Fixed::getRawBits () const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}
