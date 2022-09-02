#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data
{
	private:
		std::string _data;

	public:
		Data();
		Data(std::string data);
		Data(const Data &original);
		~Data();
		Data &operator=(const Data &original);
};

std::ostream &operator<<(std::ostream &stream, Data &data);

uintptr_t	serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

#endif
