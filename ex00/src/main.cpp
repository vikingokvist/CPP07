#include "../includes/whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    std::string c = "Hello";
    std::string d = "World";

    std::cout << "A.- Int:  " << a << std::endl;
    std::cout << "B.- Int:  " << b << std::endl << std::endl;
    ::swap(a, b);
    std::cout << "After Swap:" << std::endl << std::endl;
    std::cout << "A.- Int:  " << a << std::endl;
    std::cout << "B.- Int:  " << b << std::endl << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;


    std::cout << "C.- String:  " << c << std::endl;
    std::cout << "D.- String:  " << d << std::endl << std::endl;
    ::swap(c, d);
    std::cout << "After Swap:" << std::endl;
    std::cout << "C.- String:  " << c << std::endl;
    std::cout << "D.- String:  " << d << std::endl << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    // ::swap(a, d); SELF HANDLED TEMPLATE COMPILATION ERROR

    return (0);
}