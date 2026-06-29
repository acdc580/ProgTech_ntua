#include <iostream>
#include "babyratio.hpp"

using namespace std;

int main() { 
    int n1, d1, n2, d2;

    cout << "--- Interactive Rational Calculator ---" << endl;
    
    // Get the first fraction
    cout << "Enter the numerator and denominator for Fraction A (separated by a space): ";
    cin >> n1 >> d1;
    rational a(n1, d1);

    // Get the second fraction
    cout << "Enter the numerator and denominator for Fraction B (separated by a space): ";
    cin >> n2 >> d2;
    rational b(n2, d2);

    cout << endl << "--- Results ---" << endl;
    
    cout << "Fraction A simplified: "; 
    a.print(); 
    cout << endl;

    cout << "Addition (A + B): "; 
    a.add(b).print(); 
    cout << endl;

    cout << "Subtraction (A - B): "; 
    a.sub(b).print(); 
    cout << endl; 

    cout << "Subtraction (B - A): ";
    b.sub(a).print(); 
    cout << endl;
    
    cout << "Multiplication (A * B): "; 
    a.mul(b).print(); 
    cout << endl;

    cout << "Division (A - B): ";
    a.div(b).print(); 
    cout << endl; 

    return 0;
}