#include "span.hpp"

Span::Span(unsigned int i) : size(i), counter(0) {};

void	Span::addNumber(unsigned int x)
{
	if (counter <= size)
	{
		counter++;
		vec.push_back(x);
	}
	else
		throw (std::exception());
}

void	Span::addNumber(unsigned int x, unsigned int y)
{
	for(unsigned int i = x; i <= y; i++)
	{
		if (counter <= size)
		{
			counter++;
			vec.push_back(i);
		}
		else
			throw (std::exception());
		//std::cout << i << std::endl;
	}
}

unsigned int	Span::shortestSpan()
{
	if (counter > 2)
	{
		std::vector<unsigned int>::iterator small = std::min_element(vec.begin(), vec.end());
		return (small - vec.begin());
		//std::cout << "Shortest Span:" << std::endl;
		//std::cout << "Position: " << small - vec.begin() << ", Value: " << vec[small - vec.begin()] << std::endl;
	}
	else
		throw (std::exception());
}

unsigned int	Span::longestSpan()
{
	if (counter > 2)
	{
		std::vector<unsigned int>::iterator big = std::max_element(vec.begin(), vec.end());
		return (big - vec.begin());
		//std::cout << "Longest Span:" << std::endl;
		//std::cout << "Position: " << big - vec.begin() << ", Value: " << vec[big - vec.begin()] << std::endl;
	}
	else
		throw (std::exception());
}

Span::~Span(){};
