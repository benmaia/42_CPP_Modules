#pragma once

#include <iostream>
#include <string>

template <class T>
class Array
{
	private:
		T* arr;
		size_t len;

	public:
		Array()
		{
			arr = NULL;
			len = 0;
		};
		Array(unsigned int n)
		{
			arr = new T[n];
			len = n;
		};
		Array(const Array& other)
		{
			this->arr = other.arr;
			this->len = other.len;
		}
		Array& operator=(const Array& other)
		{
			if (this == &other)
				return *this;
			delete[] arr;
			arr = new T[other.size()];
			for (size_t i = 0; i < other.size(); i++)
				arr[i] = other.arr[i];
			return *this;
		}

		Array& operator[](int index)
		{
			if (index >= len || index < 0)
				throw(std::exception());
			else
				return (arr[index]);
		}

		size_t	size(void)
		{
			return len;
		}
};
