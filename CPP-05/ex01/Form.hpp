/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:56:03 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 15:24:45 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Bureaucrat;

class Form
{
	public :
		Form();
		Form(std::string, int, int);
		Form(const Form &);
		~Form();

		Form &operator= (const Form &);

		std::string getName() const;
		int getSignedGrade() const;
		int getExecuteGrade() const;
		bool getSigne() const;

		bool beSigned(Bureaucrat &);
		void causeRefusal(Bureaucrat &) ;

		class GradeTooHigh : public std::exception
		{
			virtual const char* what () const throw();
		};
		
		class GradeTooLow : public std::exception
		{
			virtual const char* what () const throw();
		};

		void displayInfo(std::ostream &);

	private :
		const std::string _name;
		bool signe;
		int signedGrade;
		int executeGrade;
};

	std::ostream& operator<<(std::ostream &out, Form&);

#endif