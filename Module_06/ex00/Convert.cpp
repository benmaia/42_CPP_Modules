#include "Convert.hpp"

Convert::Convert()
{
	std::cout << "\n Convert default Constructor called" << std::endl;
}

Convert::Convert(std::string _arg) : _arg(_arg)
{
	std::cout << "\n Convert Constructor called" << std::endl;
}

Convert::~Convert()
{
	std::cout << " Convert Destructor called\n" << std::endl;
}

Convert::Convert(const Convert &original)
{
	this->_arg = original._arg;
	this->_character = original._character;
	this->_integer = original._integer;
	this->_fdecimal = original._fdecimal;
	this->_decimal = original._decimal;
	std::cout << " Convert Copy Constructor called" << std::endl;
}

Convert &Convert::operator=(const Convert &original)
{
	this->_arg = original._arg;
	this->_character = original._character;
	this->_decimal = original._decimal;
	this->_fdecimal = original._fdecimal;
	this->_integer = original._integer;
	return (*this);
	std::cout << " Convert Copy Assigment called" << std::endl;
}

void	Convert::convertArgToType(void)
{
	char	*end;
	int	j;
	long long	in;
	long double test;

	for (size_t i = 0; i < _arg.length(); i++)
	{
		if (!std::isdigit(_arg.c_str()[i]))
		{
			if (_arg.length() == 1)
			{
				setChar(_arg.c_str()[0]);
				convertChar();
				return ;
			}
			else if (_arg[i] == '.')
			{
				if (!_arg[++i] || !std::isdigit(_arg.c_str()[i]))
					return ;
				j = i;
				while (std::isdigit(_arg.c_str()[i++])){}
				if (_arg[i - 1] == 'f' && !_arg[i])
				{
					test = atof(_arg.c_str());
					if (test < FLT_MIN || test > FLT_MAX)
					{
						std::cout << "Float Overflow" << std::endl;
						return ;
					}
					else
					{
						setFloat(test);
						convertFloat(_arg.length() - j - 1);
						return ;
					}
				}
				else if (_arg[i - 2] && !_arg[i - 1])
				{
					test = std::strtod(_arg.c_str(), &end);
					if (test < DBL_MIN || test > DBL_MAX)
					{
						std::cout << "Double Overflow" << std::endl;
						return ;
					}
					else
					{
						setDouble(std::strtod(_arg.c_str(), &end));
						convertDouble(_arg.length() - j);
						return ;
					}
				}
			}
			else if (!_arg.compare("nanf") || !_arg.compare("-inff") || !_arg.compare("+inff"))
			{
				setFloat(atof(_arg.c_str()));
				convertSpecialFloat();
				return ;
			}
			else if (!_arg.compare("nan") || !_arg.compare("-inf") || !_arg.compare("+inf"))
			{
				setDouble(atof(_arg.c_str()));
				convertSpecialDouble();
				return ;
			}
			else if (_arg[i] == '-')
				i++;
			else
			{
				std::cout << "Wrong parameter" << std::endl;
				return ;
			}
		}
		}
		in = atol(_arg.c_str());
		if (in < INT_MIN || in > INT_MAX)
		{
			std::cout << "Int overflow" << std::endl;
			return ;
		}
		else
		{
			setInt(in);
			convertInt();
		}
}

void	Convert::convertChar(void)
{
	std::cout << std::endl;
	std::cout << "   Char convert" << std::endl;
	std::cout << std::endl;
	if (getChar() < 0 && getChar() > 126)
		std::cout << "   char: impossible" << std::endl;
	else if (!std::isprint(getChar()))
		std::cout << "   char: not displayable" << std::endl;
	else
		std::cout << "   char: " << getChar() << std::endl;
	setInt(static_cast<int>(getChar()));
	std::cout << "   int: " << getInt() << std::endl;
	setFloat(static_cast<float>(getChar()));
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getChar()));
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	Convert::convertInt(void)
{
	std::cout << std::endl;
	std::cout << "   Int convert" << std::endl;
	std::cout << std::endl;
	if (getInt() < 0 || getInt() > 255)
		std::cout << "   char: impossible" << std::endl;
	else
	{
		if (!std::isprint(getInt()))
			std::cout << "   char: not displayable" << std::endl;
		else
		{
			setChar(static_cast<char>(getInt()));
			std::cout << "   char: " << getChar() << std::endl;
		}
	}
	std::cout << "   int: " << getInt() << std::endl;
	setFloat(static_cast<float>(getInt()));
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getInt()));
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	Convert::convertFloat(int x)
{
	std::cout << std::endl;
	std::cout << "   Float convert" << std::endl;
	std::cout << std::endl;
	if (getFloat() < 0 || getFloat() > 255)
		std::cout << "   char: impossible" << std::endl;
	else
	{
		if (!std::isprint(getFloat()))
			std::cout << "   char: not displayable" << std::endl;
		else
		{
			setChar(static_cast<char>(getFloat()));
			std::cout << "   char: " << getChar() << std::endl;
		}
	}
	setInt(static_cast<int>(getFloat()));
	std::cout << "   int: " << getInt() << std::endl;
	std::cout << "   float: " << std::setprecision(x) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getFloat()));
	std::cout << "   double: " << std::setprecision(x) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	Convert::convertDouble(int x)
{
	std::cout << std::endl;
	std::cout << "   Double convert" << std::endl;
	std::cout << std::endl;
	if (getDouble() < 0 || getDouble() > 255)
		std::cout << "   char: impossible" << std::endl;
	else
	{
		if (!std::isprint(getDouble()))
			std::cout << "   char: not displayable" << std::endl;
		else
		{
			setChar(static_cast<char>(getDouble()));
			std::cout << "   char: " << getChar() << std::endl;
		}
	}
	setInt(static_cast<int>(getDouble()));
	std::cout << "   int: " << getInt() << std::endl;
	setFloat(static_cast<float>(getDouble()));
	std::cout << "   float: " << std::setprecision(x) << std::fixed << getFloat() << "f" << std::endl;
	std::cout << "   double: " << std::setprecision(x) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	Convert::convertSpecialFloat(void)
{
	std::cout << std::endl;
	std::cout << "   Float Special convert" << std::endl;
	std::cout << std::endl;
	if (!std::isprint(getChar()))
		std::cout << "   char: impossible" << std::endl;
	else
	{
		setChar(static_cast<char>(getFloat()));
		std::cout << "   char: " << getChar() << std::endl;
	}
	setInt(static_cast<int>(getFloat()));
	//std::cout << "   int: " << getInt() << std::endl;
	std::cout << "   int: impossible" << std::endl;
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<float>(getFloat()));
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	//https://stackoverflow.com/questions/38795544/is-casting-of-infinity-to-integer-undefined
	std::cout << std::endl;
}

void	Convert::convertSpecialDouble(void)
{
	std::cout << std::endl;
	std::cout << "   Double Special convert" << std::endl;
	std::cout << std::endl;
	if (!std::isprint(getChar()))
		std::cout << "   char: impossible" << std::endl;
	else
	{
		setChar(static_cast<char>(getDouble()));
		std::cout << "   char: " << getChar() << std::endl;
	}
	setInt(static_cast<int>(getDouble()));
	//std::cout << "   int: " << getInt() << std::endl;
	std::cout << "   int: impossible" << std::endl;
	setFloat(static_cast<float>(getDouble()));
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	//https://stackoverflow.com/questions/38795544/is-casting-of-infinity-to-integer-undefined
	std::cout << std::endl;
}

void	Convert::setInt(int x)
{
	this->_integer = x;
}

void	Convert::setChar(char x)
{
	this->_character= x;
}

void	Convert::setFloat(float x)
{
	this->_fdecimal= x;
}

void	Convert::setDouble(double x)
{
	this->_decimal= x;
}

int	Convert::getInt(void)
{
	return (this->_integer);
}

char	Convert::getChar(void)
{
	return (this->_character);
}

float	Convert::getFloat(void)
{
	return (this->_fdecimal);
}

double	Convert::getDouble(void)
{
	return (this->_decimal);
}

