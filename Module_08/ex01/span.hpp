#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int size;
		std::vector<unsigned int> vec;
		unsigned int counter;

	public:
		Span(unsigned int i);
		~Span();
		void	addNumber(unsigned int x);
		void	addNumber(unsigned int x, unsigned int y);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};
