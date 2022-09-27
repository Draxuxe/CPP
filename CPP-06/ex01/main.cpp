/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:29:24 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/22 18:49:53 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

struct Data
{
	std::string phrase;
	int nb;
	float float_;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main (int ac, char **av)
{
	(void) av;
	if (ac != 1)
	{
		std::cout << "No arguments needed." << std::endl;
		return (-1);
	}
	Data data;
	Data *deserialized;
	data.phrase = "test";
	data.nb = 42;
	data.float_ = 42.42f;
	std::cout << "String : " << data.phrase << std::endl;
	std::cout << "Number : " << data.nb << std::endl;
	std::cout << "Float : " << data.float_ << "f" << std::endl;
	uintptr_t raw = serialize(&data);
	std::cout << "SERIALIZING!" << std::endl;
	std::cout << raw << std::endl;
	std::cout << "DESERIALIZING!" << std::endl;
	std::cout << deserialized << std::endl;
	deserialized = deserialize(raw);
	std::cout << deserialized->phrase << std::endl;
	std::cout << data.nb << std::endl;
	std::cout << deserialized->float_ << "f" << std::endl;
	/*
		Maintenant data et deserialized sont pareils on a
		transmis les donnes de l'un vers l'autre en les "decomposants"
	*/
	return (0);
}