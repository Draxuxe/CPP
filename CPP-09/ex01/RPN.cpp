/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:13:28 by lfilloux          #+#    #+#             */
/*   Updated: 2023/03/17 12:56:37 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::vector<int> createIntVector(char *line)
{
    std::vector<int> myInts;
    for (int i = 0; line[i]; i ++)
    {
        if (std::isdigit(line[i]))
        {
            if (line[i + 1] && line[i + 1] != ' ' && !std::isdigit(line[i + 1]))
                throw (BadInput());
            else if (line[i + 1] && line[i + 1] != ' ' && !std::isdigit(line[i + 1]))
                throw (TwoDigits());
            int value = line[i] - '0';
            myInts.push_back(value);
        }
    }
    return (myInts);
}

bool isASign(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (true);
    return (false);
}

std::vector<char> createSignsVector(char *line)
{
    std::vector<char> mySigns;
    for (int i = 0; line[i]; i ++)
    {
        if (isASign(line[i]))
            mySigns.push_back(line[i]);
        else if ((!std::isdigit(line[i]) && !isASign(line[i]) && line[i] != ' '))
            throw (BadInput());
    }
    return (mySigns);
}

int myAdd(int a, int b)
{
    return (a + b);
}

int mySous(int a, int b)
{
    return (a - b);
}
int myMult(int a, int b)
{
    return (a * b);
}

int myDiv(int a, int b)
{
    if (b == 0)
        throw (Division());
    return (a / b);
}

void calculate(std::vector<int> &myInts, std::vector<char> &mySigns)
{
    std::vector<int>::iterator itNb = myInts.begin();
    std::vector<char>::iterator itSigns = mySigns.begin();
    int res = *itNb;

    for (++itNb; itNb != myInts.end() && itSigns != mySigns.end(); itNb++)
    {
        switch (*itSigns)
        {
            case '+':
                res = myAdd(res, *itNb);
                break ;
            case '-':
                res = mySous(res, *itNb);
                break ;
            case '*':
                res = myMult(res, *itNb);
                break ;
            case '/':
                res = myDiv(res, *itNb);
                break ;
            default:
                break ;
        }
        itSigns ++;
    }
    std::cout << res << std::endl;
}