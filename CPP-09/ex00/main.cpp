/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:50:44 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/21 15:13:29 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool checkFile(char *file)
{
    std::string stringFile(file);
    if (stringFile.find(".txt") == std::string::npos)
    {
        std::cout << "The format of the file is invalid. (.txt)" << std::endl;
        return (false);
    }
    std::ifstream inputFile(file);
    if (!inputFile.is_open())
    {
        std::cout << "The file doesn't exist." << std::endl;
        return (false);
    }
    char a;
    if (!inputFile.get(a))
    {
        inputFile.close();
        std::cout << "The file is empty." << std::endl;
        return (false);
    }
    inputFile.close();
    return (true);
}

void parseLine(std::string line, std::string *date, float *value)
{
    if (line.find("|") == std::string::npos)
        throw (BadInput());
    int sep = line.find("|");
    *date = line.substr(0, sep - 1);
    std::string stringValue = line.substr(sep + 2, line.length() - (sep + 2));
    if (stringValue.empty())
        throw (BadInput());
    else if (stringValue[0] == '-')
        throw (Negative());
    *value = stringToFloat(stringValue);
    if (*value > 1000)
        throw (OutOfRange());
    
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "1 argument only is needed, the database file (.txt)" << std::endl;
        return (1);
    }
    if (checkFile(av[1]) != true)
        return (1);
    std::string line;
    std::ifstream inputFile(av[1]);
    std::map<std::string, float> myDatabase = createDataMap();
    while (std::getline(inputFile, line))
    {
        try {
            std::string date;
            float value;
            parseLine(line, &date, &value); // parser plusieurs pipes et plusieurs points et si lettre ou quoi
            calculateBitcoins(myDatabase, date, value);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}