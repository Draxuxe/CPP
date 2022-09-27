/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:50:01 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/27 13:19:05 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<std::string> stack;
	stack.push ("Hello");
	stack.push ("World!");
	stack.push ("I");
	stack.push ("Am");
	stack.push ("trying");
	stack.push ("to");
	stack.push ("understand");
	stack.push ("CPP.");

	std::cout << stack.top() << std::endl;

	stack.pop();

	std::cout << stack.size() << std::endl;

	for (MutantStack<std::string>::iterator it = stack.begin (); it != stack.end (); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	for (MutantStack<std::string>::reverse_iterator it = stack.rbegin (); it != stack.rend (); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	return (0);
}