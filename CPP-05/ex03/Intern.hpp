/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:35:09 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/09 14:17:43 by lfilloux         ###   ########.fr       */
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

		Form *PresidentialPardon(std::string);
		Form *ShrubberyCreation(std::string);
		Form *RobotomyRequest(std::string);
		Form *makeForm(std::string, std::string);

	private :
		Form *(Intern::*function[3])(std::string);
};

#endif