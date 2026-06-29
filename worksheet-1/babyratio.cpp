#ifndef CONTEST
#include "babyratio.hpp"
#endif

using namespace std;

rational::rational(int n, int d) { 
    nom = n; 
    den = d;
};

rational rational::add(rational r) { 
    int a = nom * r.den + r.nom * den;  
    int b = den * r.den; 
    if(a * b > 0) { 
        return rational(abs(a), abs(b));
    }
    else { 
        return rational(-abs(a), abs(b)); 
    }
};

rational rational::sub(rational r) { 
    int a = nom * r.den - r.nom * den; 
    int b = den * r.den; 
    if(a * b > 0) { 
        return rational(abs(a), abs(b));
    }
    else { 
        return rational(-abs(a), abs(b));
    }
};

rational rational::mul(rational r) { 
    int a = nom * r.nom; 
    int b = den * r.den; 
    if(a * b > 0) { 
        return rational(abs(a), abs(b));
    }
    else { 
        return rational(-abs(a), abs(b));
    }
};

rational rational::div(rational r) { 
    int a = nom * r.den; 
    int b = den *r.nom; 
    if(a * b > 0) { 
        return rational(abs(a), abs(b));
    }
    else { 
        return rational(-abs(a), abs(b));
    }
};

int rational::gcd(int a, int b) { 
    while(a > 0 && b > 0) { 
        if(a > b) { 
            a %= b; 
        }
        else { 
            b %= a; 
        }
    }
    return a + b;
};

void rational::print() { 
    int c = gcd(nom, den); 
    if(nom * den > 0) { 
        cout << abs(nom) / c << "/" << abs(den) / c; 
    }
    else { 
        cout << -abs(nom) / c << "/" << abs(den) / c; 
    }
};