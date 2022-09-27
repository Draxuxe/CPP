/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:01 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 16:04:44 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm ();
		ShrubberyCreationForm (std::string const &);
		ShrubberyCreationForm (const ShrubberyCreationForm &);
		~ShrubberyCreationForm ();

		ShrubberyCreationForm &operator= (const ShrubberyCreationForm &);

		void execute(Bureaucrat const & executor) const;

		void displayInfo(std::ostream &);

	private :
		void getExecute() const;
};

#endif