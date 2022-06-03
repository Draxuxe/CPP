/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:58:05 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 12:30:34 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(int, int, int);
		ClapTrap(std::string);
		ClapTrap(std::string, int, int, int);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void displayInfo(std::ostream&);

	protected :
		std::string _name;
		int hp;
		int energie;
		int dealt;
};

	std::ostream& operator<<(std::ostream &out, ClapTrap&);

#endif