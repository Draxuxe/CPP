/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:35:09 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/26 18:03:41 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern &);
		~Intern();

		Intern &operator= (const Intern &);

		Form *PresidentialPardon(std::string);
		Form *ShrubberyCreation(std::string);
		Form *RobotomyRequest(std::string);
		Form *makeForm(std::string, std::string);

		class UnrecognizedForm : public std::exception
		{
			virtual const char* what () const throw();
		};
		
		void getExecute();

	private :
		Form *(Intern::*function[3])(std::string);
};

#endif