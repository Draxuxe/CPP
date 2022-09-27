/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:16:31 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/20 16:11:10 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact ();
		~Contact ();

		static Contact fillInfo ();
		void printContact (Contact contact);

		void setName (std::string);
		void setLastName (std::string);
		void setNickname (std::string);
		void setNumber (std::string);
		void setSecret (std::string);

		std::string getName ();
		std::string getLastName ();
		std::string getNickname ();
		std::string getNumber ();
		std::string getSecret ();

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;

		void printTooLong (std::string s);
};

#endif