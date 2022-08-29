/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:56:47 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/03 14:54:38 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public :
		Brain();
		Brain(const Brain &);
		~Brain();

		std::string whatIThink (int len);
		void printMyFirstIdeas () const;
		Brain &operator=(Brain const &);
		void setIdeas (int, std::string const);
		std::string const getIdea (int);

	private :
		std::string ideas[100];
};

#endif