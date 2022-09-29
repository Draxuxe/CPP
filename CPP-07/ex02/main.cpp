/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:23:23 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/29 16:42:48 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	//INT
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];

		srand(time(NULL));

		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
			std::cout << test[3] << " || " << tmp[3] << std::endl;
			tmp[3] = 8;
			std::cout << test[3] << " || " << tmp[3] << std::endl;
			test[3] = 53;
			std::cout << test[3] << " || " << tmp[3] << std::endl;
		}
		//Copy operator test
		std::cout << mirror[3] << " || " << numbers[3] << std::endl;
		mirror[3] = 8;
		std::cout << mirror[3] << " || " << numbers[3] << std::endl;
		numbers[3] = 53;
		std::cout << mirror[3] << " || " << numbers[3] << std::endl;
		numbers[3] = 8;

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "It didn't save the same value!" << std::endl;
				delete []mirror;
				return (1);
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
			numbers[i] = rand();
		delete []mirror;
	}
	//STRING
	{
		Array<std::string> Test(20);
		Array<std::string> Test1(Test);

		for (int i = 0; i < 20; i ++)
		{
			Test[i] = "a";
			Test1[i] = "b";
		}
		std::cout << Test[3] << " || " << Test1[3] << std::endl;
		Test[3] = "c";
		std::cout << Test[3] << " || " << Test1[3] << std::endl;
		Test1[3] = "jsp";
		std::cout << Test[3] << " || " << Test1[3] << std::endl;
		Test[3] = "jsp";
		std::cout << Test[3] << " || " << Test1[3] << std::endl;
		if (Test[3] != Test1[3])
		{
			std::cerr << "It didn't save the same value!" << std::endl;
			return (1);
		}
	}
	return (0);
}