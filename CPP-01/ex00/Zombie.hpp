/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:46:44 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 10:43:53 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie (std::string name);
		~Zombie ();

		void announce ();

	private:
		std::string z_name;
};

Zombie *newZombie (std::string name);
void randomChump (std::string name);

#endif
