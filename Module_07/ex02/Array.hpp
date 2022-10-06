#pragma once

#include <iostream>
#include <string>

#define MAX_VAL 750
template <class T>
class Array
{
	private:
		T* arr;
		size_t len;

	public:
		Array()
		{
			arr = new T[0];
			len = 0;
		};
		Array(unsigned int n)
		{
			arr = new T[n];
			len = n;
		};
		Array(const Array& other)
		{
			arr = new T[other.len];
			for (size_t i = 0; i < other.len; i++)
				this->arr[i] = other.arr[i];
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

		T& operator[](int index)
		{
			if (index >= (int)len || index < 0)
				throw(std::exception());
			else
				return (arr[index]);
		}

		

		size_t	size(void)
		{
			return len;
		}

		~Array()
		{
			delete[] arr;
		}
};
