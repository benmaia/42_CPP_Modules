#include "Base.hpp"
#include <cstdlib>
#include <time.h>

Base::~Base()
{
	std::cout << "Base Destructor" << std::endl;
}

Base* generate(void)
{
	srand(time(NULL));
	int r = rand() % 100;
	switch (r % 3){
	case 0:
		std::cout << "A\n";
		return new A;
	case 1:
		std::cout << "B\n";
		return new B;
	default:
		std::cout << "C\n";
		return new C;
	}
}

void	identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "Got A\n";
	else if (b)
		std::cout << "Got B\n";
	else if (c)
		std::cout << "Got C\n";
}

void	identify(Base& p)
{
	identify(&p);
}
