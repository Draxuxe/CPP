/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:19:54 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/27 16:25:01 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

Span::Span () : _size(0), list(NULL)
{
	std::cout << "Span constructor called" << std::endl;
	return ;
}

Span::Span (unsigned int n) : _size(n), list(new std::vector<int>[n]())
{
	std::cout << "Span size constructor called" << std::endl;
	return ;
}

Span::Span (const Span &span)
{
	*this = span;
	std::cout << "Span size constructor called" << std::endl;
	return ;
}

Span &Span::operator=(const Span &span)
{
	if (this == &span)
		return (*this);
	std::cout << "Span surcharged operator called." << std::endl;
	this->_size = span._size;
	if (this->list)
		delete[] list;
	list = new std::vector<int>[span._size]();
	for (unsigned int i = 0; i < span._size; i ++)
		list[i] = span.list[i];
	return (*this);
}

Span::~Span ()
{
	if (this->list)
		delete[] this->list;
	std::cout << "Span destructor called" << std::endl;
	return ;
}

std::vector<int> Span::getList()
{
	if (this->_size == 0)
		throw Span::NoSpan();
	return (*(this->list));
}

void Span::addNumber (int nb)
{
	if (this->_size == 0)
		throw Span::NoSpan();
	else if (this->list->size() == this->_size)
		throw Span::ListComplete();
	this->list->push_back(nb);
	return ;
}

int Span::shortestSpan ()
{
	if (this->_size == 0)
		throw Span::NoSpan();
	std::vector<int>::const_iterator end = this->list->end();
	int shortest_span = INT_MAX;
	for (std::vector<int>::const_iterator actual_i = this->list->begin(); actual_i != end; actual_i++)
	{
		for (std::vector<int>::const_iterator i = actual_i + 1; i != end; ++i)
		{
			if (*actual_i > *i)
			{
				if (*actual_i - *i < shortest_span)
					shortest_span = *actual_i - *i;
			}
			else
			{
				if (*i - *actual_i < shortest_span)
					shortest_span = *i - *actual_i;
			}
		}
	}
	return (shortest_span);
}

int Span::longestSpan ()
{
	if (this->_size == 0)
		throw Span::NoSpan();
	std::vector<int>::const_iterator end = this->list->end();
	int longest = 0;
	int shortest = INT_MAX;
	for (std::vector<int>::const_iterator i = this->list->begin(); i != end; ++i)
	{
		if (*i > longest)
			longest = *i;
		if (*i < shortest)
			shortest = *i;
	}
	return (longest - shortest);
}