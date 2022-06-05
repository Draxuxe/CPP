/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:19:44 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:37:54 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public :
		Dog();
		~Dog();

		void makeSound() const;
		Dog &operator=(Dog const &);
		virtual Brain *getBrain();
		void printIdeas() const;

	private:
		Brain *ideas;
};

#endif