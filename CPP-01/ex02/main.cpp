/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:28:12 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/30 11:55:09 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string phrase = "HI THIS IS BRAIN";
	std::string *ptr = &phrase;
	std::string &ref = phrase;

	std::cout << "STRING: " << &phrase << std::endl;
	std::cout << "PTR: " << ptr << std::endl;
	std::cout << "REF: " << &ref << std::endl << std::endl;

	std::cout << "STRING: " << phrase << std::endl;
	std::cout << "PTR: " << *ptr << std::endl;
	std::cout << "REF: " << ref << std::endl;
}