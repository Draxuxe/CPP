/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:43:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/10/03 16:00:36 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack () {
			std::cout << "MutantStack constructor called." << std::endl;
			return ;
		}
		MutantStack (const MutantStack &mutantstack) {
			*this = mutantstack;
			std::cout << "MutantStack copy constructor called." << std::endl;
			return ;
		}
		~MutantStack () {
			std::cout << "MutantStack destructor called." << std::endl;
			return ;
		}

		MutantStack &operator= (const MutantStack &mutantstack) {
			if (this == &mutantstack)
				return (*this);
			std::cout << "MutantStack surcharged operator called." << std::endl;
			return (*this);
		}

		using std::stack<T>::pop;
		using std::stack<T>::push;
		using std::stack<T>::size;
		using std::stack<T>::top;

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator begin() {return (this->c.begin());};
		const_iterator begin() const {return (this->c.begin());};
		iterator end() {return (this->c.end());};
		const_iterator end() const {return (this->c.end());};
		reverse_iterator rbegin() {return (this->c.rbegin());};
		const_reverse_iterator rbegin() const {return (this->c.rbegin());};
		reverse_iterator rend() {return (this->c.rend());};
		const_reverse_iterator rend() const {return (this->c.rend());};
};

#endif