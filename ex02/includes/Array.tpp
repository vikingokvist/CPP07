#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array() : array(new T[0]), length(0) {}


template <typename T>
Array<T>::Array(unsigned int n) : length(n) {

	this->array = new T[this->length];
}

template <typename T>
Array<T>::~Array() {

		delete[] this->array;		
}

template <typename T>
Array<T>::Array(const Array& src) : array(new T[src.size()]), length(src.size()) {
	
	for (unsigned int i = 0; i < this->length; i++) {

		this->array[i] = src.array[i];
	}
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& src) {

	if (this != &src) {

		delete[] this->array;
		this->length = src.size();
		this->array = new T[this->length];
		for (unsigned int i = 0; i < this->length; i++) {

			this->array[i] = src.array[i];
		}
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {

    if (index >= length) {

        throw (Array<T>::IndexOutOfBoundsException());
	}
    return (array[index]);
}

template <typename T>
unsigned int Array<T>::size() const {

    return (this->length);
}

template <typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw() {
	
	return ("Index Out of Bounds");
}