/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:09 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:29:26 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &);
		PresidentialPardonForm(const PresidentialPardonForm &);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm &);

		void execute(Bureaucrat const & executor) const;

		void displayInfo(std::ostream &);

	private :
		void getExecute() const;
};

#endif