#include <iostream>
#include "fullratio.hpp"

int main() { 
    int n1, d1, n2, d2;

    std::cout << "--- Interactive Rational Calculator ---" << std::endl;
    
    std::cout << "Enter the numerator and denominator for Fraction A (separated by a space): ";
    std::cin >> n1 >> d1;
    rational a(n1, d1);

    std::cout << "Enter the numerator and denominator for Fraction B (separated by a space): ";
    std::cin >> n2 >> d2;
    rational b(n2, d2);

    std::cout << "--- Results ---" << std::endl;

    std::cout << "Add: " << a + b << std::endl; 
    std::cout << "Sub: " << a - b << std::endl; 
    std::cout << "Mul: " << a * b << std::endl; 
    std::cout << "Div: " << a / b << std::endl; 

    return 0;
}