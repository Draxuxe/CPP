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

float stringToFloat(std::string line)
{
    //A l aide
}

std::string findDate(std::string line)
{
    std::string date = line.substr(0, line.find(",") - 1);
    return (date);
}

std::string findValue(std::string line)
{
    int start = line.find(",") + 1;
    std::string value = line.substr(start, line.length() - start);
    return (stringToFloat(value));
}

std::map<std::string, float> createDataMap()
{
    std::string line;
    std::ifstream dataFile("data.csv");
    std::map<std::string, float> dataMap;
    while (std::getline(dataFile, line))
        dataMap.insert(std::pair<std::string, float>(findDate(line), findValue(line)));
    return (dataMap);
}