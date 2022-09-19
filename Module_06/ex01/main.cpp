#include "Data.hpp"


int main()
{
	Data d;
	d.value = 0;
	d.x = 1;
	d.y = 2;
	std::cout << "\nSerialize\n\n";
	std::cout << d << std::endl;
	uintptr_t t = serialize(&d);
	std::cout << "\nDeserialize\n\n";
	Data *o = deserialize(t);
	std::cout << *o << std::endl;
	std::cout << "\n";
	return 0;
}
