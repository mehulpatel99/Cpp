#include<iostream>
#include<string>
using namespace std;

class student
{
	public:
	void roll()
	{ 
	   int roll;
		cout<<"enter your roll no. "<<endl;
		cin>>roll;
	}
};
class test:virtual public student
{
	public:
	void english()
	{
//		int i;
		cout<<"enter your english obtained no. "<<endl;
//		cin>>i;
	}
	void math()
	{
//		int a;
		cout<<"enter your math obtained no. "<<endl;
//		cin>>a;
	}
};
class result:public test,virtual student
{
	public:
	void res()
	{
     int marks;
	cout<<"your  total no.is ";
//	cout<<a+i;

	}
};

int main()
{
	int a,i,roll;
	result p;
	p.roll();
	p.english();
	cin>>i;
	p.math();
	cin>>a;
	p.res();
	cout<<a+i<<endl;
	


}