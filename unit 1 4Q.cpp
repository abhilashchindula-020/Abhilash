//ILLISTRATE the use of deult argument and access specifiers
#include<iostream>
using  namespace std;
void greet(string name, string message = "Hello") {
	cout<<message<<","<<name<<"!"<<endl;
}
int main(){
	greet("Alice");
	message:"Hello";
	greet("bob","Good Morning");
	return 0;
}
