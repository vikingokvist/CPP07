#include "../includes/iter.hpp"
#include <cctype>


template <typename T>
void    increment(T& element) {

    ++element;
}

template <typename T>
void    to_upper(T& element) {

    for (size_t i = 0; i < element.size(); ++i) {

        element[i] = std::toupper(static_cast<unsigned char>(element[i]));
    }
}

template <typename T>
void    printString(T& element) {

    std::cout << element << ", ";
}

int     main(void)
{
    {
        std::string array[] = {"hello", "world", "how", "are", "you"};
        size_t len = sizeof(array) / sizeof(array[0]);

        std::cout << "Original Array" << std::endl;
        iter(array, len, printString<std::string>);
        std::cout << std::endl << std::endl;

        std::cout <<  "After function applied" << std::endl;
        iter(array, len, to_upper<std::string>);
        iter(array, len, printString<std::string>);
        std::cout << std::endl << std::endl;
    }
    {
        int array[] = {1, 1, 1, 1, 1, 1};
        size_t len = sizeof(array) / sizeof(array[0]);

        std::cout << "Original Array" << std::endl;
        iter(array, len, printString<int>);
        std::cout << std::endl << std::endl;

        std::cout << "After function applied" << std::endl;
        iter(array, len, increment<int>);
        iter(array, len, printString<int>);
        std::cout << std::endl << std::endl;
    }

    return (0);
}
