#include "Data.hpp"


int main()
{
	Data d("A1");
	std::cout << d << std::endl;
	uintptr_t t = serialize(&d);

	Data *o = deserialize(t);
	std::cout << *o << std::endl;
	return 0;
}
