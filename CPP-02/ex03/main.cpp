/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:13 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/20 15:26:18 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

int main (void)
{
	const Point a(1, 1);
	const Point b(1, 5);
	const Point c(5, 1);
	const Point point(2, 2);

	return (bsp(a, b, c, point));
}