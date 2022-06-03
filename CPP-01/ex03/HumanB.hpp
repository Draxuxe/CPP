/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:50:49 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 14:37:12 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	public:
		HumanB (std::string name);
		~HumanB ();
		void setWeapon(Weapon &weapon);
		void attack();

	private:
		std::string b_name;
		Weapon *b_weapon;
};

#endif