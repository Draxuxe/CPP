/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:04:12 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 11:26:37 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde (int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i ++)
		horde[i].setName (name);
	return (horde);
}
