/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:56:03 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 16:05:46 by lfilloux         ###   ########.fr       */
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
		virtual ~Form();

		Form &operator= (const Form &);

		const std::string getName() const;
		int getSignedGrade() const;
		int getExecuteGrade() const;
		bool getSigne() const;

		void setSigne (const int);

		virtual bool beSigned(Bureaucrat &);
		virtual void causeRefusal(Bureaucrat &);

		virtual void getExecute() const = 0;
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHigh : public std::exception
		{
			virtual const char* what () const throw();
		};
		
		class GradeTooLow : public std::exception
		{
			virtual const char* what () const throw();
		};

		virtual void displayInfo(std::ostream &) = 0;

	private :
		const std::string _name;
		bool signe;
		int signedGrade;
		int executeGrade;
};

	std::ostream& operator<<(std::ostream &out, Form&);

#endif