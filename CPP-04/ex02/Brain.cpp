/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:56:41 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:08:23 by lfilloux         ###   ########.fr       */
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

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i ++)
		this->ideas[i] = brain.ideas[i];
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &brain)
{
	std::cout << "Copy brain operator called." << std::endl;
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

std::string const Brain::getIdea (int i)
{
	if (i < 0 && i > 99)
	{
		std::cout << "No such ideas." << std::endl;
		return ("ERROR");
	}
	else
		return (this->ideas[i]);
}

void Brain::setIdeas (int i, std::string const idea)
{
	if (i > -1 && i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "No such ideas." << std::endl;
}