//ACCESS specifiers
#include<iostream>
using namespace std;
class Myclass {
	public:
		int publicVar;
	private:
	    int privateVar;
	protected:
	    int protectedVar;
	public:
	void setPrivateVar(int val){
		privateVar = val;
	}			
	int getPrivateVar(){
		return privateVar;
	}
};
int main(){
	Myclass obj;
	obj.publicVar = 10;
	obj.setPrivateVar(20);
	cout << "public var : " << obj.publicVar<<endl;
	cout << "private var : "<< obj.getPrivateVar()<<endl;
	return 0;
}
