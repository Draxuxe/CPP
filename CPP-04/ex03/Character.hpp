/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:25:38 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 10:39:10 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :
		Character();
		Character(std::string);
		~Character();

		std::string _name;
};

#endif