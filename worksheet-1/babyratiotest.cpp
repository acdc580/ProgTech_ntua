#include <iostream>
#include "babyratio.hpp"

int main() { 
    rational a(1, 2);
    rational b(3, 4);
    rational c(5, 6); 
    a.add(b).sub(c).print();
    
    std::cout << std::endl;

    a.print();
    std::cout << " should be 1/2" << std::endl;

    return 0;
}