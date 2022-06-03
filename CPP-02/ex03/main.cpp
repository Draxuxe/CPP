/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:13 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/30 13:54:16 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

int main (void)
{
	const Point a(1, 5);
	const Point b(4, 0);
	const Point c(3, 2);
	const Point point(3, 1.99);

	return (bsp(a, b, c, point));
}