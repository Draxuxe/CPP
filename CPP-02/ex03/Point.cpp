/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:17 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/30 13:54:56 by lfilloux         ###   ########.fr       */
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
	std::cout << "Copy assignement operator called" << std::endl;
	(void) nb;
	return (*this);
}
