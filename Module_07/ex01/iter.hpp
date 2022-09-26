#pragma once

#include <iostream>
#include <string>

template <class T>
void	iter(T* a, size_t b, void (*f)(T& c))
{
	if (!a)
		return ;
	for (size_t i = 0; i < b; i++)
		f(a[i]);
}
