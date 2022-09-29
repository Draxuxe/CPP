/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:18:43 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/29 16:36:40 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {
	public:
		Array<T> () : _content(new T[0]()), _n(0) {
			std::cout << "Array constructor called." << std::endl;
		};
		Array<T> (unsigned int n) :  _content(new T[n]()), _n(n) {
			for (unsigned int i = 0; i < n; i ++)
				_content[i] = T ();
			std::cout << "Array size constructor called." << std::endl;
		};
		~Array<T> () {
			delete[] _content;
			std::cout << "Array destructor called." << std::endl;
		};
		Array<T> (const Array &array) {
			std::cout << "Array copy constructor called." << std::endl;
			this->_n = array._n;
			_content = new T[array._n]();
			for (unsigned int i = 0; i < array._n; i ++)
				_content[i] = array._content[i];
		}
		Array<T> &operator= (const Array &array) {
			if (this == &array)
				return (*this);
			std::cout << "Array surchaged copy operator called." << std::endl;
			this->_n = array._n;
			delete[] this->_content;
			_content = new T[array._n]();
			for (unsigned int i = 0; i < array._n; i ++)
				_content[i] = array._content[i];
			return (*this);
		}

		class OutOfRange : public std::exception {
			const char *what() const throw() {
				return ("Sorry, this index can't be used. He is out of range.");
			}
		};

		unsigned int size(const Array<T> &) {
			return (this->_n);
		}

		T &operator[](const int i)
		{
			if (i < 0 || i >= (int)_n)
				throw (Array<T>::OutOfRange());
			return (this->_content[i]);
		}

	private:
		T *_content;
		unsigned int _n;
};

#endif