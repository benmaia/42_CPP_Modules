#include "iter.hpp"

template< typename T >
void tester(T &value)
{
	std::cout << "VALUE: " << value << std::endl;
}

int	main(void)
{
	int			intArray[] = {-5, 33, 140, 3, 4, 5, 22};
	char a[7] = "abcdef"; 

	std::cout << "=======================\n";
	iter(intArray, 6, tester);
	std::cout << "=======================\n";
	iter(a, 6, tester);

	return (0);
}
