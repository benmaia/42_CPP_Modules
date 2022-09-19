#include "Data.hpp"
#include <cstdint>

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

std::ostream &operator<<(std::ostream& stream, Data& data)
{
	stream << "Value: " << data.value << "\nx:     " << data.x << "\ny:     " << data.y;
	return stream;
};
