/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:21 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/18 15:16:22 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == i)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char)std::toupper(av[i][j]);
		i ++;
	}
	std::cout << std::endl;
	return (0);
}