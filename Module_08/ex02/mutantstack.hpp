#pragma once

#include <iostream>
#include <stack>
#include <cstdlib>
#include <algorithm>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &mutant);
		MutantStack& operator=(const MutantStack &mutant);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};
