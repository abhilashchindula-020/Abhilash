//multiple inheritance
#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "ADITYA UNIVERSITY" << endl;
    }
};

class B {
public:
    void displayB() {
        cout << "SURAMPALEM" << endl;
    }
};

class C: public A, public B {
public:
    void displayC() {
        cout << "ADITYA UNIVERSITY,SURAMPALEM" << endl;
    }
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}
