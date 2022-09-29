/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:32:51 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/29 18:12:11 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <algorithm>

class OutOfRange : public std::exception {
	const char *what() const throw() {
		return ("Sorry, but this number isn't in this container.");
	}
};

template<typename T>
int findpos(const T &list, int nb)
{
	int j = 1;
	typename T::const_iterator i = list.begin();
	typename T::const_iterator end = list.end();

	while (++i != end)
	{
		if (*i == nb)
			return (j);
		j ++;
	}
	return (-1);
}

template<typename T>
void easyfind(const T &list, int nb)
{
	typename T::const_iterator end = list.end();

	typename T::const_iterator res = std::find(list.begin(), end, nb);
	try {
		if (res == end)
			throw (OutOfRange());
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << nb << " is in pos " << findpos(list, nb) << "." << std::endl;
	return ;
}

#endif