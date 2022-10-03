/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:15:50 by lfilloux          #+#    #+#             */
/*   Updated: 2022/10/03 11:33:02 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <vector>
#include "Span.hpp"

template<typename T>
void printlist(const T &list)
{
	typename T::const_iterator i = list.begin();
	typename T::const_iterator end = list.end();

	while (i != end - 1)
	{
		std::cout << *i << " | ";
		i ++;
	}
	std::cout << *i << std::endl;
}

int main()
{
	{
		Span sp = Span(5);
		Span sp1 = Span(10);
		Span sp2 = Span(0);

		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(170);

			int tab[10];
			sp1.addNumbers(tab, tab + (sizeof(tab) / sizeof(tab[0]))); // Throw an error size exceeded
			sp2.addNumber(53); 
			sp.addNumber(53); /* Throw an error size exceeded
								but will not be test cause already
								an error before */
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			printlist(sp.getList());
			printlist(sp1.getList());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp1.longestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span sp(10000);
		int tab[10000];
		sp.addNumbers(tab, tab + (sizeof(tab) / sizeof(tab[0])));
		printlist(sp.getList());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}