/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:50:44 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/15 14:13:03 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstring>
#include <fstream>

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

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "1 argument only is needed, the database file (.txt)" << std::endl;
        return (0);
    }
    if (checkFile(av[1]))
        return (0);
    std::string line;
    std::ifstream inputFile(av[1]);
    while (std::getline(inputFile, line))
    {
        std::map<std::string, float> inputMap;
        //store ma database dans une map et de meme pour le file
        //puis ensuite regarder avec iterator bound
    }
    return (1);
}