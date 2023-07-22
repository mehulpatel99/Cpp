#include<iostream>
#include<string>
using namespace std;

class person
{
	public:
		 void name()
		{
			string name;
			cout<<"person name"<<endl;
			cin>>name;
			
		}
		void age()
		{
			int age;
			cout<<"your age"<<endl;
			cin>>age;
		}
};
class student : virtual public person
{
	public:
	      void percen()
		{   
		     float a;
			cout<<"percentage"<<endl;
			cin>>a;
			
		}
	
	
		
			
};


class teacher:public student,virtual person
{
	public:
				void salary()
		{
			int salary;
			cout<<"person salary is "<<endl;
			cin>>salary;
		}
		
		
};
int main()
{
    teacher pri;
	
	
	pri.name();
	pri.age();
	pri.percen();
	pri.salary();
	
}