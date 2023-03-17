/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:59:10 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 12:46:25 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <cstdio>
# include <vector>

std::vector<int> createIntVector(char *line);
std::vector<char> createSignsVector(char *line);

bool isASign(char c);

int myAdd(int a, int b);
int mySous(int a, int b);
int myMult(int a, int b);
int myDiv(int a, int b);

void calculate(std::vector<int> &myInts, std::vector<char> &mySigns);

class TwoDigits : public std::exception {
			const char *what() const throw() {
				return ("Error: number is above 9.");
			}
};

class BadInput : public std::exception {
			const char *what() const throw() {
				return ("Error: bad Input.");
			}
};

class Division : public std::exception {
			const char *what() const throw() {
				return ("Error: Can't divide by 0.");
			}
};

#endif