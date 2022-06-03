/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:26:18 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/25 11:21:35 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public :
		Fixed ();
		Fixed (const Fixed &nb);
		Fixed &operator=(const Fixed &);
		~Fixed ();

		int getRawBits () const;
		void setRawBits (int const raw);

	private :
		int 				value;
		static const int	fraction = 8;
};

#endif