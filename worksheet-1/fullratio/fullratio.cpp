#ifndef CONTEST
#include "fullratio.hpp"
#endif

rational::rational(int n, int d) { 
    nom = n; 
    den = d; 
};

rational operator+(const rational &x, const rational &y) { 
    int a = x.nom * y.den + x.den * y.nom; 
    int b = x.den * y.den; 

    if(a * b > 0) { 
        return rational(abs(a), abs(b)); 
    }
    else { 
        return rational(-abs(a), abs(b));
    }
};

rational operator-(const rational &x, const rational &y) { 
    int a = x.nom * y.den - y.nom * x.den; 
    int b = x.den * y.den; 

    if(a * b > 0) { 
        return rational(abs(a), abs(b)); 
    }
    else { 
        return rational(-abs(a), abs(b));
    }    
};

rational operator*(const rational &x, const rational &y) { 
    int a = x.nom * y.nom; 
    int b = x.den * y.den; 

    if(a * b > 0) { 
        return rational(abs(a), abs(b)); 
    }
    else { 
        return rational(-abs(a), abs(b));
    }
};

rational operator/(const rational &x, const rational &y) { 
    int a = x.nom * y.den; 
    int b = x.den * y.nom; 

    if(a * b > 0) { 
        return rational(abs(a), abs(b)); 
    }
    else { 
        return rational(-abs(a), abs(b));
    }
};

int rational::gcd(int a, int b) { 
    a = abs(a); 
    b = abs(b); 
    if(b == 0) { 
        return a; 
    }
    return rational::gcd(b, a % b); 
};
std::ostream &operator<<(std::ostream &out, const rational &x) {
    int c = rational::gcd(x.nom, x.den); 
    if(x.nom * x.den > 0) { 
        out << abs(x.nom) / c <<"/"<< abs(x.den) / c; 
    } 
    else { 
        out << -abs(x.nom) / c <<"/"<< abs(x.den) / c; 
    }
    return out; 
};

