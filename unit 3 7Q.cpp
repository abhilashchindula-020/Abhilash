//pure virtual function
#include<iostream>
#include<cmath>
using namespace std;
class shape{
	public: 
	virtual float area() =0;
};
class rectangle : public shape {
	private:
		float length,breadth;
	public:
		rectangle(float l,float b){
			length = l;
			breadth = b;
		}
	float area() override{
	return length * breadth;
	}	
};
class circle : public shape{
	private:
		float radius;
	public:
	   circle(float r){
	   	radius = r;
	   }	
	   float area()
	   override {
	   return M_PI * radius * radius;
	   }
};
class triangle : public shape{
	private:
		float base,height;
	public: 
	    triangle (float b, float h){
	    	base = b;
	    	height = h;
		}	
		float area() override{
		return 0.5 * base * height;
		}
};
int main(){
	shape* shape;
	rectangle rect(25,6);
	circle circ(2);
	triangle tri(1,9);
	shape = &rect;
	cout<<"Area of rectangle:"<<shape->area()<<endl;
	shape = &circ;
	cout<<"Area of circle :"<<shape->area()<<endl;
	shape = &tri;
	cout<<"Area of triangle:"<<shape->area()<<endl;
	return 0;
}
