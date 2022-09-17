#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits.h>
#include <float.h>

#pragma once

class Convert
{
	private:
		std::string _arg;
		int			_integer;
		char			_character;
		float			_fdecimal;
		double		_decimal;
	
	public:
		void	setInt(int x);
		void	setChar(char x);
		void	setFloat(float x);
		void	setDouble(double x);
		int	getInt(void);
		char	getChar(void);
		float	getFloat(void);
		double	getDouble(void);
		Convert();
		Convert(std::string arg);
		Convert(const Convert &original);
		Convert &operator=(const Convert &original);
		~Convert();
		void	convertArgToType(void);
		void	convertChar(void);
		void	convertInt(void);
		void	convertFloat(int x);
		void	convertSpecialFloat(void);
		void	convertDouble(int x);
		void	convertSpecialDouble(void);
};

