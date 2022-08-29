/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:19:42 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 09:34:03 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	public :
		Cat();
		Cat(const Cat &);
		~Cat();

		void makeSound() const;
		Cat &operator= (Cat const &);
		virtual Brain *getBrain();

	private:
		Brain *ideas;
};

#endif