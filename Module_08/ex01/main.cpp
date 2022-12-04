#include "span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span tenk(10000);

	srand(time(0));

	for (int i = 0; i < 10000; i++)
		tenk.addNumber(rand());

	std::cout << tenk.shortestSpan() << std::endl;
	std::cout << tenk.longestSpan() << std::endl;

	Span add(20);

	add.addNumber(2);
	try
	{
		add.addNumber(20, 39);
	}
	catch (std::exception& error)
	{
		std::cout << "Error, Overflow, please use less numbers" << std::endl;
	}


	return 0;
}
