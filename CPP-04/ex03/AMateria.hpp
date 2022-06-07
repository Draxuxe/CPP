/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:49:21 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 10:31:07 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class AMateria
{
	protected :
		AMateria();
		~AMateria();
		std::string _type;

	public :
		AMateria(std::string const & type);

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};