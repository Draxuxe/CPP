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
# include <deque>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>

void sortList(std::list<int> &myList, int begin, int end);
int getIteratorNb(std::list<int> &myList, int i);
std::list<int>::iterator getIterator(std::list<int> &myList, int i);
void mergeSortList(std::list<int> &myList, int begin, int mid, int end);
void printList(std::list<int> &myList);

bool checkDuplicate(std::deque<int> &myQue, int num);

class BadInput : public std::exception {
			const char *what() const throw() {
				return ("Error: Bad input.");
			}
};

class Negative : public std::exception {
			const char *what() const throw() {
				return ("Error: A negative number was implemented.");
			}
};

#endif