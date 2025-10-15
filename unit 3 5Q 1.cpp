//object of a class member
#include <iostream>
using namespace std;
class abhi
{
	public:
		int x;
	abhi()
	{
		x=20;
		cout<<"\n in abhi constructor";
		
	}	
};
class manu
{
	public:
		int y;
		abhi a;
		manu()
		{
		cout<<"\n in manu constructor";
		}
	void show()
	{
	  cout<<"\nX="<<a.x<<"\tY="<<y;	
	}	
};
int main()
{
	manu b;
	b.show();
	return 0;
}
