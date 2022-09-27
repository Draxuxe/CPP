/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:42:57 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/26 10:16:54 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void odd(T &param)
{
	if (param % 2 == 0)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
}

int main (void)
{
	//Avec des chars
	char tab[10] = "abcdefghi";
	std::cout << tab << std::endl;
	::iter(tab, 9, &add);
	std::cout << tab << std::endl;

	std::cout << "---------------------------" << std::endl;

	//Avec des ints
	int tab1[] = {1, 2, 3, 4 ,5, 6};
	::iter(tab1, 6, &odd);
	return (0);
}