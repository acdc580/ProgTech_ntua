#ifndef CONTEST
#include "babyratio.hpp"
#endif

using namespace std;

rational::rational(int n, int d) { 
    if (d == 0) { 
        nom = 0; den = 1; 
    } else {
        if (d < 0) { n = -n; d = -d; }
        int g = gcd(abs(n), d); 
        nom = n / g;
        den = d / g;
    }
}

rational rational::add(rational r) { 
    return rational((nom * r.den) + (r.nom * den), den * r.den);
}

rational rational::sub(rational r) { 
    return rational((nom * r.den) - (r.nom * den), den * r.den);
}

rational rational::mul(rational r) { 
    return rational(nom * r.nom, den * r.den);
}

rational rational::div(rational r) { 
    return rational(nom * r.den, den * r.nom);
}

int rational::gcd(int a, int b) { 
    while(a > 0 && b > 0) { 
        if(a > b) a %= b; 
        else b %= a; 
    }
    return a + b;
}

void rational::print() { 
    cout << nom << "/" << den;
}