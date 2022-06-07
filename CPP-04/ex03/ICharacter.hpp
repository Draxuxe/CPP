/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:49:23 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 10:45:17 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
# include "Character.hpp"

class ICharacter
{
	public :
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		//virtual void equip(AMateria* m) = 0;
		//virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		ICharacter *&operator=(Character const &chara);

	private :
		std::string _name;
};

#endif