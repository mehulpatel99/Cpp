
#include<iostream>
using namespace std;
class math
{
	public:
		//circle
    void area()
{
	float radius;
//	float pi=3.14;
	cout<<"enter the value circle "<<endl;
    cin>>radius;
    cout<<"area of circle means "<<pi*radius*radius<<endl;
	
}
//  rectangle()
   void area(float width,float length)
 {
 

 cout<<"your rectangle value is "<<width*length<<endl;
 
}

//triangle()
   void area(float base,float height,char)
{

  cout<<"your triangle value is "<<base * height<<endl;
}



};

int main()
{
	
	math s;
	s.area();
	s.area(2,3);
	s.area(2,3);
//	
}