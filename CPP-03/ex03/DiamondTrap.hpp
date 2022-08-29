/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:58:46 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 11:03:23 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap &);
		~DiamondTrap();

		DiamondTrap &operator= (const DiamondTrap &);

		void whoAmI ();
		void attack(std::string);

		void displayInfo(std::ostream&);

	private :
		std::string _name;
};

	std::ostream& operator<<(std::ostream &out, DiamondTrap&);

#endif