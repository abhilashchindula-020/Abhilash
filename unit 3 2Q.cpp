//overload unary,and binary operator using friend function
#include<iostream>
using namespace std;
class number
{
	private:
		int value;
	public:
	//constructor
	number(int v = 0)
	{
		value = v;
	}	
	friend number operator - (number n);
	friend number operator + (number n1,number n2);
	//dispaly function
	void display()
	{
		cout<<"value ="<<value<<endl;
	}
};
number operator-(number n)
{
	return number(-n value);
}
number operator +(number n1,number n2)
{
	return number(n1.value + n2.value);
}
int main()
{
	number a(15),b(5),result;
	cout<<"Original values:"<<endl;
	a.display();
	b.dispaly();
	result = a+b;
	cout<<"After Binary + operator(a+b):"<<endl;
	result = -a;
	cout<<"After Unary - operator (-a):"<<endl;
}
