/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:04:10 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 11:17:14 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie ();
		Zombie (std::string name);
		~Zombie ();

		void setName (std::string name);
		void announce ();

	private:
		std::string z_name;
};

Zombie *zombieHorde (int N, std::string name);

#endif