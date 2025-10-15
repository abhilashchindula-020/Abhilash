#include<iostream>
using namespace std;
class Animal
{
	public:
		void eat()
		{
			cout<<"Animal is eating."<<endl;
		}
};
class Dog:public Animal
{
	public:
		void bark()
		{
			cout<<"Dog is barking."<<endl;
		}
};
int main()
{
	Dog d;
	d.eat();
	d.bark();
}
//multiple inheritence
class A{
	public:
		void displayA()
		{
			cout<<"class A"<<endl;
		}
};
class B{
	public:
		void displayB()
		{
			cout<<"class B"<<endl;
		}
};
