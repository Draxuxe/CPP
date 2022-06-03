/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:26:18 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/30 13:25:56 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed ();
		~Fixed ();
		Fixed (int const nb);
		Fixed (float const nb);
		Fixed (const Fixed &nb);

		Fixed &operator=(const Fixed &);

		bool operator==(const Fixed &);
		bool operator!=(const Fixed &);
		bool operator<=(const Fixed &);
		bool operator>=(const Fixed &);
		bool operator<(const Fixed &);
		bool operator>(const Fixed &);

		Fixed operator+(const Fixed &) const;
		Fixed operator-(const Fixed &) const;
		Fixed operator/(const Fixed &) const;
		Fixed operator*(const Fixed &) const;

		Fixed &operator++();
		Fixed operator++(int x);
		Fixed &operator--();
		Fixed operator--(int x);

		int getRawBits () const;
		void setRawBits (int const raw);
		float toFloat () const;
		int toInt () const;

		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed max (Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);

	private :
		int 				value;
		static const int	fraction = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed &nb);

#endif