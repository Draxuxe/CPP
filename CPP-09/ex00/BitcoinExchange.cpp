/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:12:48 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/21 15:13:12 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

float stringToFloat(std::string line)
{
    float value;
    std::stringstream ss;
    bool point = false;

    ss << line;
    for (int i = 0; line[i]; i ++)
    {
        if (std::isdigit(line[i]))
            ss >> value;
        else if (!std::isdigit(line[i]) && line[i] == '.' && point == false)
        {
            point = true;
            ss >> value;
        }
        else if ((!std::isdigit(line[i]) && point == true) || (!std::isdigit(line[i]) && line[i] != '.' && point == false))
            throw (BadInput());
    }
    return (value);
}

std::string findDate(std::string line)
{
    std::string date = line.substr(0, line.find(","));
    return (date);
}

float findValue(std::string line)
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

bool checkDate(std::string date)
{
    int dateValue;
    std::stringstream year;
    std::stringstream month;
    std::stringstream day;

    year << date.substr(0, 4);
    month << date.substr(6,8);
    day << date.substr(10,12);

    year >> dateValue;
    if (dateValue < 2009)
        return (false);
    month >> dateValue;
    if (dateValue < 1 || dateValue > 12)
        return (false);
    day >> dateValue;
    if (dateValue < 1 || dateValue > 31)
        return (false);
    return (true);
}

void calculateBitcoins(std::map<std::string, float> &myMap, std::string date, float value)
{
    if (checkDate(date) != true)
        throw(BadInput());
    if (myMap.find(date) != myMap.end())
    {
        std::cout << date << " => " << value << " = " << myMap.find(date)->second * value << std::endl;
    }
    else
    {
        std::map<std::string, float>::iterator it = myMap.lower_bound(date);
        std::map<std::string, float>::iterator start;
        for (start = myMap.begin(); start != myMap.end(); start ++)
        {
            std::map<std::string, float>::iterator tmp = start;
            if ((++tmp)->first == it->first)
                break ;
        }
        std::cout << date << " => " << value << " = " << start->second * value << std::endl;
    }
}