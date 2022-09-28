/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:28:39 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/28 11:45:06 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstdlib>
# include <climits>
# include <iomanip>
# include <cmath>

typedef enum s_type
{
	CHAR,
	INT,
	FLOAT,
	DEC,
	NONE
}			t_type;

int isInt(std::string arg, const char *av)
{
	if (arg[0] == '-')
	{
		if (arg.length() > 11)
			return (-1);
		for (long unsigned int i = 1; i < arg.length(); i ++)
			if (!std::isdigit(arg[i]))
				return (-1);
		if (arg.length() == 11 && ::strcmp(av, "-2147483648") > 0)
			return (1);
	}
	else
	{
		if (arg.length() > 10)
			return (-1);
		for (long unsigned int i = 0; i < arg.length(); i ++)
			if (!std::isdigit(arg[i]))
				return (-1);
		if (arg.length() == 10 && std::strcmp(av, "2147483647") > 0)
			return (1);
	}
	return (0);
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
	if (arg[i] == '-')
		i ++;
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
	if (arg[i] == '-')
		i ++;
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

t_type findType (std::string arg, const char *av)
{
	int returnInt = isInt(arg, av);
	if (returnInt == 0)
		return (INT);
	else if (isChar(arg))
		return (CHAR);
	else if (isFloat(arg))
		return (FLOAT);
	else if (isDec(arg) || returnInt == 1)
		return (DEC);
	return (NONE);
}

void printChar (char char_, int int_)
{
	if ((int_ >= 0 && int_ <= 31) || (int_ >= 127 && int_ <= 255))
		std::cout << "CHAR: Non displayable" << std::endl;
	else if (int_ < 0 || int_ > 255)
		std::cout << "CHAR: Impossible" << std::endl;
	else
		std::cout << "CHAR: '" << char_ << "'" << std::endl;
	return ;
}

void printInt (int int_, const char *arg, bool limite)
{
	if (std::strtol(arg, NULL, 0) < INT_MIN || std::strtol(arg, NULL, 0) > INT_MAX || limite == true)
		std::cout << "INT: Impossible (Overflow or Underflow)" << std::endl;
	else
		std::cout << "INT: " << int_ << std::endl;
	return ;
}

bool isLimit (std::string num)
{
	if (num == "+inf" || num == "-inf" || num == "+inff" || num == "-inff" ||
			num == "nan" || num == "nanf")
		return (true);
	return (false);
}

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "1 argument is needed." << std::endl;
		return (-1);
	}
	int int_ = 0;
	float float_ = 0;
	double double_ = 0;
	char char_;
	std::string arg(av[1]);
	t_type type_ = findType (arg, av[1]);
	bool limite = isLimit(arg);
	if (type_ == NONE && limite == false)
	{
		std::cout << "That's a bullshit number here." << std::endl;
		return (-1);
	}
	switch (type_)
	{
		case INT:
			int_ = std::atoi(av[1]);
			char_ = static_cast<char>(int_);
			float_ = static_cast<float>(int_);
			double_ = static_cast<double>(int_);
			std::cout << "It's an Int." << std::endl;
			break ;
		case FLOAT:
			float_ = std::strtof(av[1], NULL);
			char_ = static_cast<char>(float_);
			int_ = static_cast<int>(float_);
			double_ = static_cast<double>(float_);
			std::cout << "It's a Float." << std::endl;
			break ;
		case DEC:
			double_ = strtod(av[1], NULL);
			char_ = static_cast<char>(double_);
			int_ = static_cast<int>(double_);
			float_ = static_cast<float>(double_);
			std::cout << "It's a Double." << std::endl;
			break ;
		default:
			char_ = av[1][0];
			int_ = static_cast<int>(char_);
			float_ = static_cast<float>(char_);
			double_ = static_cast<double>(char_);
			std::cout << "It's a Char." << std::endl;
			break ;
	}
	printChar(char_, int_);
	printInt (int_, av[1], limite);
	std::cout << "FLOAT: " << std::fixed << std::setprecision(2) << float_ << "f" << std::endl;
	std::cout << "DOUBLE: " << std::fixed << std::setprecision(2) << double_ << std::endl;
	return (0);
}