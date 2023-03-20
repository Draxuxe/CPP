/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:04:24 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 13:34:40 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int getIteratorNb(std::list<int> &myList, int i)
{
    std::list<int>::iterator it;
    int a = 0;
    for (it = myList.begin(); it != myList.end(); it ++)
    {
        if (a == i)
            break ;
        a ++;
    }
    return (*it);
}

std::list<int>::iterator getIterator(std::list<int> &myList, int i)
{
    std::list<int>::iterator it;
    int a = 0;
    for (it = myList.begin(); it != myList.end(); it ++)
    {
        if (a == i)
            break ;
        a ++;
    }
    return (it);
}

void mergeSortList(std::list<int> &myList, int begin, int mid, int end) {
    int n1 = mid - begin + 1;
    int n2 = end - mid;

    std::list<int> List1;
    std::list<int> List2;
    for (int i = 0; i < n1; i++)
        List1.push_back(getIteratorNb(myList, begin + i));
    for (int i = 0; i < n2; i++)
        List2.push_back(getIteratorNb(myList, mid + 1 + i));


    int List1Index = 0;
    int List2Index = 0;
    int MergedListIndex = begin;

    while (List1Index < n1 && List2Index < n2)
    {
        if (getIteratorNb(List1, List1Index) <= getIteratorNb(List2, List2Index))
        {
            *getIterator(myList, MergedListIndex) = getIteratorNb(List1, List1Index);
            List1Index++;
        }
        else
        {
            *getIterator(myList, MergedListIndex) = getIteratorNb(List2, List2Index);
            List2Index++;
        }
        MergedListIndex++;
    }
    while (List1Index < n1)
    {
        *getIterator(myList, MergedListIndex) = getIteratorNb(List1, List1Index);
        List1Index++;
        MergedListIndex++;
    }
    while (List2Index < n2)
    {
        *getIterator(myList, MergedListIndex) = getIteratorNb(List2, List2Index);
        List2Index++;
        MergedListIndex++;
    }
}

void printList(std::list<int> &myList)
{
    std::list<int>::iterator it;
    for (it = myList.begin(); it != myList.end(); it ++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void sortList(std::list<int> &myList, int begin, int end)
{
    if (begin >= end)
        return ;
    int mid = begin + (end - begin) / 2;
    sortList(myList, begin, mid);
    sortList(myList, mid + 1, end);
    mergeSortList(myList, begin, mid, end);
}

bool checkDuplicate(std::deque<int> &myQue, int num)
{
    std::deque<int>::iterator it;
    for (it = myQue.begin(); it != myQue.end(); it++)
    {
        if (*it == num)
            return (true);
    }
    return (false);
}