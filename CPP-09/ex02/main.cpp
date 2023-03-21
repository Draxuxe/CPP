/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:28:54 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/21 10:53:35 by lfilloux         ###   ########.fr       */
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
    std::list<int> myList;
    std::deque<int> myQue;
    try
    {
        for (int i = 1; i < ac; i ++)
        {
            if (av[i][0] == '-')
                throw (Negative());
            for(int j = 0; av[i][j] != '\0'; j ++)
            {
                if(av[i][j] < 48 || av[i][j] > 57)
                    throw (BadInput());
                else if (j >= 9 && std::strcmp(av[i], "2147483647") > 0)
                    throw (BadInput());
            }
            int num = std::atoi(av[i]);
            if (checkDuplicate(myQue, num) == false)
                myQue.push_back(num);
            myList.remove(num);
            myList.push_back(num);
        }
        myList.unique();
        std::cout << "Before List : ";
        printList(myList);
        std::clock_t listTimeStart = std::clock();
        sortList(myList, 0, myList.size() - 1);
        std::clock_t listTimeEnd = std::clock();
        std::cout << "After List : ";
        printList(myList);
        std::cout << "Before Deque : ";
        printQue(myQue);
        std::clock_t queTimeStart = std::clock();
        sortQue(myQue, 0, myQue.size() - 1);
        std::clock_t queTimeEnd = std::clock();
        std::cout << "After Deque : ";
        printQue(myQue);
        std::cout << "Time to process a range of " << myList.size() << " elements with std::list : " << std::fixed << std::setprecision(5) << (double)(listTimeEnd - listTimeStart) << " us" << std::endl;
        std::cout << "Time to process a range of " << myQue.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << (double)(queTimeEnd - queTimeStart) / CLOCKS_PER_SEC * 100 << " us" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    return (0);
}