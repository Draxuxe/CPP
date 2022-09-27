/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:21:36 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/26 09:41:07 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
T const &min(T const &a, T const &b) {
	return ((a<=b) ? a : b);
}

template< typename T >
T const &max(T const &a, T const &b) {
	return ((a>=b) ? a : b);
}

template< typename T >
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

#endif