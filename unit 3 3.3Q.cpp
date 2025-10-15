// Multi-level inheritance Example
#include<iostream>
using namespace std;

class Vehicle
{
    public:
        void move() {
            cout << "Vehicle is moving" << endl;
        }
};

class Car : public Vehicle
{
    public:
        void start() {
            cout << "Car is started" << endl;
        }
};

class SportsCar : public Car
{
    public:
        void turbo() {
            cout << "Sports Car is in turbo mode!" << endl;
        }
};

int main()
{ 
    SportsCar sc;
    sc.move();   
    sc.start();  
    sc.turbo();  
    return 0;
}
