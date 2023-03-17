/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:52:17 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 12:44:49 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <map>
# include <string>
# include <cstdio>
# include <fstream>

std::map<std::string, float> createDataMap();
std::string findDate(std::string line);
float findValue(std::string line);

bool checkDate(std::string date);

float stringToFloat(std::string line);

void calculateBitcoins(std::map<std::string, float> &myMap, std::string date, float value);

class BadInput : public std::exception {
			const char *what() const throw() {
				return ("Error: Bad Input.");
			}
};

class Negative : public std::exception {
			const char *what() const throw() {
				return ("Error: not a positive number.");
			}
};

class OutOfRange : public std::exception {
			const char *what() const throw() {
				return ("Error: number out of range (too large).");
			}
};

#endif