/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:22:32 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:50:32 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(Animal const &);
		virtual ~Animal();

		Animal &operator= (const Animal &);

		std::string getType() const;
		virtual void makeSound() const;

	protected :
		std::string type;
};

#endif