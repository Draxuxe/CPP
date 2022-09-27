/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:32:42 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/27 10:10:35 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>
#include "easyfind.hpp"

template<typename T>
void printlist(const T &list)
{
	typename T::const_iterator i = list.begin();
	typename T::const_iterator end = list.end();

	while (++i != end)
		std::cout << *i << " ";
	std::cout << std::endl;
}

int main (void)
{
	srand(time(NULL));

	std::vector<int> vector1;

	for (int i = 0; i <= 30; i ++)
		vector1.push_back(i);

	printlist(vector1);
	::easyfind(vector1, 42);

	std::cout << "-----------------------------------------------------" << std::endl;

	std::list<int> list1;

	for (int i = 0; i <= 50; i ++)
		list1.push_back(i);
	printlist(list1);
	::easyfind(list1, 3);

	//Fonction rand interdite mais utiliser juste pour tester l'efficacite
	/*std::list<int> list1;
	for (int i = 0; i <= 50; i ++)
		list1.push_back(std::rand() % 100);
	printlist(list1);
	::easyfind(list1, 93);*/

	return (0);
}