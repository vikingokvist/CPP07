#include "../includes/Array.hpp"


int main(void)
{

//--------------------------------------------------------------------------DEFAULT CONSTRUCTION

    std::cout << "Creating default array..." << std::endl;
    Array<int> a;
    std::cout << "Size of default array: " << a.size() << std::endl;


//--------------------------------------------------------------------------PARAMETER CONSTRUCTION

    std::cout << "\nCreating array of 5 ints..." << std::endl;
    Array<int> b(5);
    std::cout << "Size of b: " << b.size() << std::endl;

    std::cout << "Setting values..." << std::endl;
    for (unsigned int i = 0; i < b.size(); i++) {b[i] = static_cast<int>(i * 10);}

    std::cout << "b array contents: ";
    for (unsigned int i = 0; i < b.size(); i++) {std::cout << b[i] << " ";}
    std::cout << std::endl;

    std::cout << "Modifying b[0] = 555" << std::endl;
    b[0] = 555;

//--------------------------------------------------------------------------COPY OPERATOR

    std::cout << "\nTesting copy constructor..." << std::endl;
    Array<int> c(b);

    std::cout << "B array contents: ";
    for (unsigned int i = 0; i < b.size(); i++) {
        
        std::cout << b[i] << " ";
    }
    std::cout << std::endl<< "C array contents: ";
    for (unsigned int i = 0; i < c.size(); i++) {
        
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

//-------------------------------------------------------------------------- ASSIGNMENT OPERATOR

    std::cout << "\nTesting assignment operator..." << std::endl;
    Array<int> d;
    d = b;
    std::cout << "Modifying d[1] = 888" << std::endl;
    d[1] = 888;

    std::cout << "B array contents: ";
    for (unsigned int i = 0; i < b.size(); i++) {
        
        std::cout << b[i] << " ";
    }
    std::cout  << std::endl << "D array contents: ";
    for (unsigned int i = 0; i < d.size(); i++) {
        
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;

//--------------------------------------------------------------------------EXCEPTION

    std::cout << "\nTesting out-of-bounds exception..." << std::endl;
    try
    {
        std::cout << b[100] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

//--------------------------------------------------------------------------PARAMETER CONSTRUCTION CHARS

    std::cout << "\nCreating array of 5 chars..." << std::endl;
    Array<char> y(5);
    std::cout << "Size of y: " << y.size() << std::endl;

    std::cout << "Setting values..." << std::endl;
    for (unsigned int i = 0; i < y.size(); i++) {y[i] = static_cast<char>(65 + i);}

    std::cout << "Y array contents: ";
    for (unsigned int i = 0; i < y.size(); i++) {std::cout << y[i] << " ";}
    std::cout << std::endl;
    
//--------------------------------------------------------------------------  
    return (0);
}
