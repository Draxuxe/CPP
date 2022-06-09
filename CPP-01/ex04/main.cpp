/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:38:49 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/09 13:29:23 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Enter a filename, a string to replace, and the new string" << std::endl;
		return (-1);
	}
	else
	{
		std::string filename(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);
		std::string output;
		std::string new_line;
		std::string replaced;
		int			i;
		int			j;
		int			pos;

		std::ifstream input_file(filename);
		if (!input_file.is_open())
		{
			std::cout << "Couldn t open " << filename << ". Please try again" << std::endl;
			return (-1);
		}
		std::ofstream output_file(filename + ".replace");
		if (!output_file)
		{
			std::cout << "An error has occured." << std::endl;
			return (-1);
		}
		while (std::getline(input_file, new_line))
			output = output + new_line + "\n";
		i = -1;
		pos = 0;
		while (output[++i])
		{
			if (output[i] == s1[pos])
			{
				pos ++;
				j = 1;
				while (output[j + i] || s1[pos])
				{
					if (s1[pos] == output[i + j])
					{
						j ++;
						pos ++;
					}
					else
						break ;
				}
				if (pos == (int)s1.length())
				{
					replaced = replaced + s2;
					i += j - 1;
				}
				else
					replaced = replaced + output[i];
				pos = 0;
			}
			else
				replaced = replaced + output[i];
		}
		output_file << replaced;
		input_file.close();
		output_file.close();
	}
	return (0);
}