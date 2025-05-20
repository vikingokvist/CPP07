#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		Array& operator=(const Array& src);
		~Array();
		
		T& operator[](unsigned int index);
		
		unsigned int size() const;
		
		class OutOfBoundsException : std::exception {
			public:
				const char* what() const trow();
		}
};

# include "./Array.tpp"


#endif