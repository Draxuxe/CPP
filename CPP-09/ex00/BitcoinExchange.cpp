/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:12:48 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 11:53:44 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

float stringToFloat(std::string line)
{
    float value;

    std::sscanf(line.c_str(), "%f", &value);
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
    //checker les tailles et si pas empty
    int dateValue;
    std::string year;
    if (date.find("-") == std::string::npos || date.length() < 10)
        return (false);
    year = date.substr(0, date.find_first_of("-"));
    std::string restDate = date.substr(date.find_first_of("-") + 1, date.length());
    std::sscanf(year.c_str(), "%d", &dateValue);
    if (dateValue < 2009)
        return (false);
    std::string month;
    month = restDate.substr(0, restDate.find_first_of("-"));
    std::sscanf(month.c_str(), "%d", &dateValue);
    if (dateValue < 1 || dateValue > 12)
        return (false);
    std::string day;
    day = restDate.substr(restDate.find_first_of("-") + 1, restDate.length());
    std::sscanf(day.c_str(), "%d", &dateValue);
    if (dateValue > 31)
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