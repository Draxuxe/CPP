/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:35:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/07 10:31:55 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int main()
{
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
//	AMateria* tmp;

	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	//delete src;

	return (0);
}
