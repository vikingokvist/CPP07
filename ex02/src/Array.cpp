#include "../includes/Array.hpp"

Array::Array() {}

Array::Array(const Array& src) {
    *this = src;
}

Array& Array::operator=(const Array& src) {
    if (this != &src) {

    }
    return *this;
}

Array::~Array() {}
