/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:19:18 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/27 16:32:33 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

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
			if (_size == 0)
				throw NoSpan();
			for (T i = start; i != end; i++)
			{
				if (this->list->size() == this->_size)
					throw ListComplete();
				addNumber(*i);
			}
			return ;
		}
		int shortestSpan ();
		int longestSpan ();
		std::vector<int> getList();

		class ListComplete : public std::exception {
			const char *what() const throw () {
				return ("Sorry, but this Span is already full.");
			}
		};

		class NoSpan : public std::exception {
			const char *what() const throw () {
				return ("Sorry, but there is no Span.");
			}
		};

	private :
		unsigned int _size;
		std::vector<int> *list;
};

#endif