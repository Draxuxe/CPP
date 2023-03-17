/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:04:27 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 13:33:48 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <set>

std::list<int> createIntsList(char **line);
std::set<int> createIntsSet(char **line);

class Negative : public std::exception {
			const char *what() const throw() {
				return ("Error: A negative number was implemented.");
			}
};

#endif