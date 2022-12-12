#include "mutantstack.hpp"

template <class T> MutantStack<T>::MutantStack()
{
	std::cout << "Default constructer" << std::endl;
}

template <class T> MutantStack<T>::MutantStack(const MutantStack &mutant)
{
	std::cout << "Copy constructor" << std::endl;
	*this = mutant;
	return ;
}

template <class T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack &mutant)
{
	std::cout << "Equal Sign Operator" << std::endl;
	*this = mutant;
	return (*this);
}

template <class T> MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor" << std::endl;
}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}
