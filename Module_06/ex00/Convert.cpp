#include "Convert.hpp"

Convert::Convert()
{
	std::cout << " Convert default Constructor called" << std::endl;
}

Convert::Convert(std::string _arg) : _arg(_arg)
{
	std::cout << " Convert Constructor called" << std::endl;
}

Convert::~Convert()
{
	std::cout << " Convert Destructor called" << std::endl;
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
	*this = original;
	return (*this);
	std::cout << " Convert Copy Assigment called" << std::endl;
}
void	Convert::convertArgToType(void)
{
	char	*end;
	int	j;
	for (size_t i = 0; i < _arg.length(); i++)
	{
		if (!std::isdigit(_arg.c_str()[i]))
		{
			if (_arg.length() == 1)
			{
				setChar(_arg.c_str()[0]);
				std::cout << getChar() << std::endl;
				return ;
			}
			else if (_arg[i] == '.')
			{
				if (!_arg[++i] || !std::isdigit(_arg.c_str()[i]))
					return ;
				j = i;
				while (!std::isdigit(_arg.c_str()[i++])){}
				if (_arg[i] == 'f' && _arg[i])
				{
					setFloat(atof(_arg.c_str()));
					std::cout << std::setprecision(1) << std::fixed << getFloat() << std::endl;
					return ;
				}
				else if (!_arg[i + 1])
				{
					setDouble(std::strtod(_arg.c_str(), &end));
					std::cout << std::setprecision(1) << std::fixed << getDouble() << std::endl;
					return ;
				}
				else
					std::cout << "Wrong parameter" << std::endl;
			}
		}
	}
	setInt(atoi( _arg.c_str() ));
				std::cout << getInt() << std::endl;
}

//void	Convert::convertTypeToAll(void)
//{

//}

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

