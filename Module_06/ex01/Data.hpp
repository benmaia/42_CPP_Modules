#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

struct	Data
{
	int value;
	int x;
	int y;
};

std::ostream &operator<<(std::ostream &stream, Data &data);

uintptr_t	serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

#endif
