#include <iostream>
#include <string>
#include "Convert.hpp"

bool isInt(std::string arg)
{
	for (long unsigned int i = 0; i < arg.length(); i ++)
		if (!std::isdigit(arg[i]))
			return (false);
	return (true);
}

bool isChar(std::string arg)
{
	if (!arg[1] && std::isprint(arg[0]) && !std::isdigit(arg[0]))
		return (true);
	return (false);
}

bool isDec (std::string arg)
{
	int i;

	i = 0;
	if (arg == "nan" || arg == "+inf" || arg == "-inf")
		return (true);
	while (arg[i] && std::isdigit(arg[i]))
		i ++;
	if (arg[i] != '.' || (arg[i] == '.' && !arg[i + 1]))
		return (false);
	i ++;
	while (arg[i] && std::isdigit(arg[i]))
		i ++;
	if (arg[i])
		return (false);
	return (true);
}

bool isFloat (std::string arg)
{
	int i;

	i = 0;
	if (arg == "nanf" || arg == "+inff" || arg == "-inff")
		return (true);
	while (arg[i] && std::isdigit(arg[i]))
		i ++;
	if (arg[i] != '.' || (arg[i] == '.' && !arg[i + 1]))
		return (false);
	i ++;
	if (arg[i] == 'f')
		return (false);
	while (arg[i] && std::isdigit(arg[i]))
		i ++;
	if (arg[i] != 'f')
		return (false);
	if (arg[++i])
		return (false);
	return (true);
}

t_type findType (std::string arg)
{
	if (isInt(arg))
		return (INT);
	else if (isChar(arg))
		return (CHAR);
	else if (isFloat(arg))
		return (FLOAT);
	else if (isDec(arg))
		return (DEC);
	return (NONE);
}

int main (int ac, char **av)
{
	Convert convert;

	if (ac != 2)
	{
		std::cout << "2 arguments are needed." << std::endl;
		return (-1);
	}
	std::string arg(av[1]);
	convert.setType(findType(arg), av[1], arg);
	if (convert.wrong == true)
	{
		std::cout << "That's a bullshit number here." << std::endl;
		return (-1);
	}
	convert.fillList();
	convert.printList();
	return (0);
}