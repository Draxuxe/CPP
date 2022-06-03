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
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &brain) const
{
	std::cout << "Copy brain constructor called." << std::endl;
	*this = brain;
	return (*this);
}