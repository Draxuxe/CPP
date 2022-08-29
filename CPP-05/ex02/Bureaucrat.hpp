/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:12:55 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/08 14:57:18 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Form;

class Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string);
		Bureaucrat(int, std::string);
		Bureaucrat(const Bureaucrat &);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void signForm(Form &);
		void executeForm(Form const &form);

		void Promoted ();
		void Retrograded ();

		void GradeTooHighException ();
		void GradeTooLowException ();

		void displayInfo (std::ostream &);

	private :
		std::string _name;
		int _grade;
};

	std::ostream& operator<<(std::ostream &out, Bureaucrat&);

#endif