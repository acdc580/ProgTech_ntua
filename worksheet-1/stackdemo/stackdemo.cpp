#include <iostream>
#include <stdexcept>

template <typename T>
class stack { 
public: 
    stack(int size) {
        max_size = size;
        p = new T[max_size];    
        top = 0; 
    };
    stack(const stack &s) {
        max_size = s.max_size; 
        top = s.top; 
        p = new T[max_size]; 

        for(int i = 0; i < top; i++) { 
            p[i] = s.p[i]; 
        }
    };
    ~stack() {
        delete [] p; 
    };
    
    const stack &operator=(const stack &s) {
        if(this == &s) { 
            return *this;
        }

        max_size = s.max_size; 
        top = s.top; 
        delete [] p; 

        p = new T[max_size]; 
        for(int i = 0; i < top; i++) { 
            p[i] = s.p[i]; 
        }

        return *this; 
    };

    bool empty() {
        return top == 0; 
    };

    void push(const T &x) {
        if(top >= max_size) { 
            std::cerr << "Stack Overflow!" << std::endl; 
            return;
        }

        p[top] = x;
        top++;
    }
    
    T pop() {
        if(top == 0) {
            std::cerr << "Stack is empty\n"; 
            return T();
        }
    
        return p[--top];
    }
    int size() {
        return top;
    }

    friend std::ostream &operator<<(std::ostream &out, const stack &s) {
        out << "[";

        for(int i = 0; i < s.top; i++) { 
            out << s.p[i];
            if(i < s.top -1) { 
                out << ", ";
            }
        }
        out <<"]";
        return out; 
    };

private: 
    T *p; 
    int max_size, top;
};

#ifndef CONTEST

int main() { 
    stack<int> s(10); 
    std::cout << "s is empty: \n";
    s.push(42);
    std::cout << "s has one element: " << s << std::endl; 
    s.push(17); 
    s.push(34); 
    std::cout << "s has more elements: " << s << std::endl; 
    std::cout << "how many?: "<< s.size() << std::endl;
    stack<int> t(5); 
    t.push(17); 
    std::cout << "t: "<< t << std::endl;
    t = s; 
    std::cout << "popping from s: "<< s.pop() << std::endl; 
    s.push(8); 
    stack<int> a(s); 
    t.push(99); 
    a.push(77); 
    std::cout << "s: " << s << std::endl;
    std::cout << "t: " << t << std::endl;
    std::cout << "a: " << a << std::endl;

    stack<double> c(4); 
    c.push(3.14); 
    c.push(1.414); 
    std::cout << "c contains doubles: " << c << std::endl;

    stack<char> k(4); 
    k.push('$'); 
    k.push('&'); 
    k.push('e'); 
    std::cout << "k contains characters: " << k << std::endl;
    return 0; 
}

#endif
