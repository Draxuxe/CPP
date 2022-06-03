/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:26:18 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/25 13:26:31 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed ();
		Fixed (int const nb);
		Fixed (float const nb);
		Fixed (const Fixed &nb);
		Fixed &operator=(const Fixed &);
		~Fixed ();

		int getRawBits () const;
		void setRawBits (int const raw);
		float toFloat () const;
		int toInt () const;

	private :
		int 				value;
		static const int	fraction = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed &nb);

#endif