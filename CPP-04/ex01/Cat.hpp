/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:19:42 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:42:51 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public :
		Cat();
		Cat (const Cat &);
		~Cat();

		void makeSound() const;
		Cat &operator=(Cat const &);
		virtual Brain *getBrain();
		void printIdeas() const;

	private:
		Brain *ideas;
};

#endif