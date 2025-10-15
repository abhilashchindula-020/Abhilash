#include <iostream>
using namespace std;

// Base class
class grandparent {
public:
    void display() {
        cout << "This is the grandparent class." << endl;
    }
};

// First derived class
class parent : public grandparent {
public:
    void display() {
        cout << "This is the parent Derived class." << endl;
    }
};

// Second derived class
class child : public grandparent {
public:
    void display() {
        cout << "This is the child Derived class." << endl;
    }
};

int main() {
    grandparent b;
    parent d1;
    child d2;

    b.display();   
    d1.display();  
    d2.display();  

    return 0;
}
