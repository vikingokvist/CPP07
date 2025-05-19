#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

class Array
{
    private:

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& src);
        Array& operator=(const Array& src);
        ~Array();

        class OutOfBoundsExceeption : public std::exception {
            public:
                const char* what() const throw();
        };

        

};

#endif
