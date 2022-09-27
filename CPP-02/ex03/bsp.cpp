/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:43 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/20 15:26:32 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool sign[3];

	sign[0] = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())) >= 0;
	sign[1] = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())) >= 0;
	sign[2] = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())) >= 0;
	if (sign[0] == sign[1] && sign[1] == sign[2])
	{
		std::cout << "TRUE" << std::endl;
		return (true);
	}
	std::cout << "FALSE" << std::endl;
	return (false);
}
