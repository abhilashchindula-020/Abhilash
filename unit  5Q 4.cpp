//virtual base class 
#include <iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"class A display()"<<endl;
		}
};
class B : virtual public A{
	
};
class C : virtual public A{
	
};
class D : public B, public C{
	
};
int main()
{
D d;
d.display();
return 0;
}
