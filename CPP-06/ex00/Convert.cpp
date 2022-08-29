#include "Convert.hpp"

/* Faire les limites (nan etc)*/

Convert::Convert ()
{
	type_ = NONE;
	wrong = false;
	int_ = 0;
	float_ = 0;
	double_ = 0;
	char_ = 0;
	limit = false;
	arg = "";
	std::cout << "Default Convert constructor called." << std::endl;
	return ;
}

Convert::Convert (const Convert & conv)
{
	this->type_ = conv.type_;
	this->wrong = conv.wrong;
	this->int_ = conv.int_;
	this->float_ = conv.float_;
	this->double_ = conv.double_;
	this->char_ = conv.char_;
	this->limit = conv.limit;
	this->arg = conv.arg;
	std::cout << "Copy constructor called." << std::endl;
}

Convert::~Convert ()
{
	std::cout << "Default Convert destructor called." << std::endl;
	return ;
}

void Convert::setType (t_type type, const char *arg, std::string num)
{
	this->type_ = type;
	this->num = std::string(arg);
	this->arg = arg;
	if (num == "+inf" || num == "-inf" || num == "+inff" || num == "-inff" ||
			num == "nan" || num == "nanf")
		this->limit = true;
	switch (this->type_)
	{
		case CHAR:
			this->char_ = arg[0];
			break ;
		case INT:
			this->int_ = std::atoi(arg);
			break ;
		case FLOAT:
			this->float_ = std::strtof(arg, NULL);
			break ;
		case DEC:
			this->double_ = strtod(arg, NULL);
			break ;
		case NONE:
			this->wrong = true;
			break ;
		default:
			break ;
	}
}

void Convert::fillList ()
{
		switch (this->type_)
	{
		case CHAR:
			this->int_ = static_cast<int>(this->char_);
			this->float_ = static_cast<float>(this->char_);
			this->double_ = static_cast<double>(this->char_);
			break ;
		case INT:
			this->char_ = static_cast<char>(this->int_);
			this->float_ = static_cast<float>(this->int_);
			this->double_ = static_cast<double>(this->int_);
			break ;
		case FLOAT:
			this->char_ = static_cast<char>(this->float_);
			this->int_ = static_cast<int>(this->float_);
			this->double_ = static_cast<double>(this->float_);
			break ;
		case DEC:
			this->char_ = static_cast<char>(this->double_);
			this->int_ = static_cast<int>(this->double_);
			this->float_ = static_cast<float>(this->double_);
			break ;
		default:
			break ;
	}
}

void Convert::printChar ()
{
	if (this->int_ >= 0 && this->int_ <= 31)
		std::cout << "CHAR: Non displayable" << std::endl;
	else if (this->int_ < 0 || this->int_ > 255)
		std::cout << "CHAR: Impossible" << std::endl;
	else
		std::cout << "CHAR: '" << this->char_ << "'" << std::endl;
	return ;
}

void Convert::printInt ()
{
	if (std::strtol(this->arg, NULL, 0) < INT_MIN && std::strtol(this->arg, NULL, 0) > INT_MAX) // ca marche pas au secours
		std::cout << "INT: Overflow" << std::endl;
	else if (this->limit == true)
		std::cout << "INT: Impossible" << std::endl;
	else
		std::cout << "INT: " << this->int_ << std::endl;
	return ;
}

/* Faire marcher les overflows des ints
	regler les problemes des doubles et floats */

void Convert::printList ()
{
	printChar();
	printInt ();
	std::cout << "FLOAT: " << this->num << "f" << std::endl;
	std::cout << "DOUBLE: " << this->num << std::endl;
	return ;
}

std::ostream &operator << (std::ostream &out, Convert &conv)
{
	std::cout << "INT: " << conv.int_ << std::endl;
	std::cout << "CHAR: " << conv.char_ << std::endl;
	std::cout << "FLOAT: " << conv.float_ << std::endl;
	std::cout << "DOUBLE: " << conv.double_ << std::endl;
	return (out);
}