/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:22:32 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 09:32:27 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class AAnimal
{
	public:
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const;

	protected :
		std::string type;
		AAnimal();
		AAnimal(AAnimal const &);
};

#endif