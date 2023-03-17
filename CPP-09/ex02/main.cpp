/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:28:54 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 13:33:57 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Arguments are needed (positive numbers)." << std::endl;
        return (1);
    }
    try {
        std::list<int> myList = createIntsList(av);
        std::set<int> mySet = createIntsSet(av);
    }
    catch (const std::exception &e)
    {
        return (1);
    }
    return (0);
}