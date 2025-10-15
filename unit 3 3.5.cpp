#include<iostream>
using namespace std ;
//Hierarchical Inheritance
class Shape{
	public:
		void draw() {
			cout<<"Drawing a shape."<<endl ;
		}
};
class Circle:public Shape{
	public:
		void area() {
			cout<<"Area of Circle = pi*r^2"<<endl ;
		}
};
class Square:public Shape {
	public:
		void area() {
			cout<<"Area of Square = a^2"<<endl ;
		}
};
int main() {
	
}
