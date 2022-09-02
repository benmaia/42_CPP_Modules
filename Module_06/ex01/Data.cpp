#include "Data.hpp"
#include <cstdint>

Data::Data()
{
	this->_data = "NULL";
}

Data::Data(std::string data) : _data(data) {}

Data::~Data() {}

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
