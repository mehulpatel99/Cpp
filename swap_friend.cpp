#include<iostream>
#include<string>

using namespace std;

class mehul
{
	friend void dost();
//	public:
//		int a,b;
//         int a;
//
//			
//	protected:
//		int b=5;
				
	private:
		int a,b;
};
void dost()
{
	mehul s;
	
	cout<<"enter your no."<<endl;
	cin>>s.a>>s.b;
	
	 s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
    
	cout<<"a is: "<<s.a<<endl;

	cout<<"b is: "<<s.b<<endl;

}

int main()
{
	dost();
}

