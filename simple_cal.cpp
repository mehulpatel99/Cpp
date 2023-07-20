#include<iostream>
#include<string>

using namespace std;

class calculator
{
	public:
	int i,a;
	void add()
	{
		   cout <<"add is :" <<i + a << endl<<endl;
		
	}
};
int main()
{
	int a;
	calculator c;
	cout << "Enter add numbers: "<<endl;
    cin>>c.i >>c.a;
	c.add();
}