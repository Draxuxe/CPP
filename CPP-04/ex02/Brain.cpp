/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:56:41 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:54:32 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
	for (int i = 0; i < 100; i ++)
		ideas[i] = whatIThink(5);
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &brain)
{
	std::cout << "Copy brain constructor called." << std::endl;
	for (int i = 0; i < 100; i ++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

std::string Brain::whatIThink (int len)
{
	std::string alphabet = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string thought = "";


	for (int i = 0; i < len; i ++)
		thought += alphabet[std::rand() % alphabet.size()];
	return (thought);
}

void Brain::printMyFirstIdeas () const
{
	for (int i = 0; i < 3; i ++)
		std::cout << "IDEA NB :" << i << " " << this->ideas[i] << std::endl;
	return ;
}