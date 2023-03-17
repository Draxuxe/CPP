/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:17:12 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 12:43:35 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Only one argument is needed (the inverted Polish mathematical expression)." << std::endl;
        return (1);
    }
    if (!av[1][0])
    {
        std::cerr << "The parameter is empty." << std::endl;
        return (1);
    }
    try {
        std::vector<int> myInts = createIntVector(av[1]);
        std::vector<char> mySigns = createSignsVector(av[1]);
        calculate(myInts, mySigns);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    return (0);
}