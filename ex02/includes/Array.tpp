#include "../includes/Array.hpp"


template <typename T>
Array<T>::Array() : size(0), array(new T[0]){}

template <typename T>
Array<T>::Array(unsigned int n) : size(n) {
	this->array = new T[this->size];
}

template <typename T>
Array<T>::~Array() {

		delete[] this->array;		
}

template <typename T>
Array<T>::Array(const Array& src) : size(src.size()), array(new T[src.size()]) {
	
	for (unsigned int i = 0; i < this->size; i++)
		this->array[i] = src.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {

	if (this != &other) {
		delete[] this->array;
		this->size = src.size();
		this->array = new T[this->size];
		for (unsigned int i = 0; i < this->size; i++) {
			this->array[i] = other.array[i];
		}
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {

    if (index >= size) {
        throw (Array<T>::IndexOutOfBoundsException()));
	}
    return (array[index]);
}


template <typename T>
unsigned int Array<T>::size() const {

    return (this->size);
}

const char* Array<T>::what() const throw() {
	
	return ("Index Out of Bounds")
}