/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:04:28 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/20 11:12:44 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point ();
		Point (const float new_x, const float new_y);
		Point (const Point &);
		~Point ();

		Point &operator=(const Point &);
		void setX (const Fixed &);
		void setY (const Fixed &);
		int getX () const;
		int getY () const;

	private :
		const Fixed x;
		const Fixed y;
};

	bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif