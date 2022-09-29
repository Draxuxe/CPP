/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/29 10:50:10 by lfilloux         ###   ########.fr       */
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
		Phonebook ();
		~Phonebook ();

		int getCount();
		void addToRepertory (Contact contact);
		void printList ();
		void printContact (std::string number);

	private:
		Contact contacts[MAX_CONTACT];
		int count;
};

#endif