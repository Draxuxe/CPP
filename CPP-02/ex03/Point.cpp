/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:17 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/20 12:38:18 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Point::Point ()
{
	//std::cout << "Default constructor called" << std::endl;
	Fixed x;
	Fixed y;
	return ;
}

Point::~Point ()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Point::Point (float const new_x, float const new_y) : x(new_x), y(new_y)
{
	std::cout << "Assignement constructor called" << std::endl;
	return ;
}

int Point::getX () const
{
	return (x.getRawBits());
}

int Point::getY () const
{
	return (y.getRawBits());
}

Point::Point (const Point &nb) : x(nb.x), y(nb.y)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Point &Point::operator=(const Point &nb)
{
	if (this == &nb)
		return (*this);
	std::cout << "Copy assignement operator called" << std::endl;
	this->setX(nb.x);
	this->setY(nb.y);
	return (*this);
}

void Point::setX (const Fixed &nb)
{
	Fixed *ptr = (Fixed *)(&this->x);
	*ptr = nb;
}

void Point::setY (const Fixed &nb)
{
	Fixed *ptr = (Fixed *)(&this->y);
	*ptr = nb;
}
