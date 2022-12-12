#include <iostream>
#include <iterator>
#include <map>

template <typename T>
typename T::iterator easyfind(T &t, int x)
{
	return (t.find(x));
}

int main()
{
	std::map<int, int> test;
	test [0] = 1; 
	test [1] = 3; 
	test [2] = 6; 
	test [3] = 2; 
	test [4] = 7; 
	test [5] = 4; 
	std::cout << easyfind(test, 2)->second << std::endl;
	std::cout << easyfind(test, 5)->second << std::endl;
}
