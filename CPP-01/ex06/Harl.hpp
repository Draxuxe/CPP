/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:05:31 by lfilloux          #+#    #+#             */
/*   Updated: 2022/06/11 12:47:20 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	public :
		Harl();
		~Harl();
		void complain (std::string level);
		void printComplaints (int levels);

	private :
		void debug ();
		void info ();
		void warning ();
		void error ();
};

#endif