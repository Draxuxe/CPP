/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/25 16:37:53 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

# ifndef MAX_CONTACT
#  define MAX_CONTACT 8
# endif

class Phonebook
{
	public:
		int count;
		Phonebook ();
		~Phonebook ();

		void addToRepertory (Contact contact);
		void printList ();
		void printContact (std::string number);

	private:
		Contact contacts[MAX_CONTACT];
};

#endif