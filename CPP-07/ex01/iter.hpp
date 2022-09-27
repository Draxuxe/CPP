/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:43:09 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/26 10:15:05 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void add(T &param)
{
	param += 1;
}

template<typename T>
void iter(T *add, int const &size, void (*fct)(T &tab))
{
	for (int i = 0; i < size; i ++)
		fct(add[i]);
}

#endif