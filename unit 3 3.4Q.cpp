// hybrid inheritance
#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "student" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "employee" << endl;
    }
};

class C : public B {
public:
    void displayC() {
        cout << "sportsman" << endl;
    }
};

class D : public B {
public:
    void displayD() {
        cout << "teacher" << endl;
    }
};

int main() {
    C o1;
    o1.displayB();   
    o1.displayA();   
    o1.displayC();   

    D o2;
    o2.displayB();  
    o2.displayA();   
    o2.displayD();  
    return 0;
}
