
#include<iostream>
#include<string>

using namespace std;

class mehul
{
	friend void dost();

				
	private:
		int num1,num2;
};
void dost()
{
	mehul s;
	cout<<"enter your no."<<endl;
	cin>>s.num1>>s.num2;
	(s.num1 >= s.num2 )? cout<<" your greater value  "<<s.num1 : cout<<" your greater value  "<<s.num2 ;


    


}


int main()
{
	dost();
}

