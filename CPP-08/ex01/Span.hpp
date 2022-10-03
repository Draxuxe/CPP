/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:19:18 by lfilloux          #+#    #+#             */
/*   Updated: 2022/10/03 11:30:07 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
	public :
		Span();
		Span(unsigned int n);
		Span(const Span &);
		~Span();

		Span &operator= (const Span &);

		void addNumber (int);
		template <typename T>
		void addNumbers (T start, T end)
		{
			srand(time(NULL));
			if (_size == 0)
				throw NoSpan();
			for (T i = start; i != end; i++)
			{
				if (this->list->size() == this->_size)
					throw ListComplete();
				addNumber(rand());
			}
			return ;
		}
		unsigned long long shortestSpan ();
		unsigned long long longestSpan ();
		std::vector<int> getList();

		class ListComplete : public std::exception {
			public :
				const char *what() const throw ();
		};

		class NoSpan : public std::exception {
			public :
				const char *what() const throw ();
		};

		class OneNum : public std::exception {
			const char *what() const throw ();
		};

	private :
		unsigned int _size;
		std::vector<int> *list;
};

#endif