/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:06 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:58:17 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &);
		RobotomyRequestForm(const RobotomyRequestForm &);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator= (const RobotomyRequestForm &);

		void execute(Bureaucrat const & executor) const;

		void displayInfo(std::ostream &);

	private :
		void getExecute() const;
};

#endif