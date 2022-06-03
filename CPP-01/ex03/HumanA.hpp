/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:52:05 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/20 14:36:54 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA (std::string name, Weapon &weapon);
		~HumanA ();

		void attack ();

	private:
		std::string a_name;
		Weapon &a_weapon;
};

#endif