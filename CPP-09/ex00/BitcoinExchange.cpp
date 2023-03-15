/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:12:48 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/15 14:13:07 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.cpp"

std::map<std::string, float> createDataMap()
{
    std::string line;
    std::ifstream dataFile("data.csv");
    std::map<std::string, float> dataMap;
    while (std::getline(dataFile, line))
    {
    }
    return (dataMap);
}