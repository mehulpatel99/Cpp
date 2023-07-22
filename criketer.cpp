#include<string>
#include<iostream>
using namespace std;

int age;
string name;

class cricketer
{
	public :
		 cricketer()
		{
			cout<<"Enter your name : "<<endl;
			getline(cin,name);
			cout<<"enter your age : "<<endl;
			cin>>age;
			
			cout<<"welcome "<<name<<"to our cricket team "<<endl;
			cout<<"your age is : "<<age<<endl;
			
		}
};
		
class con:public cricketer
{
	public:
	   void bowler()
		{
			int runs,match,wickets,hattrick;
			cout<<"enter your runs : "<<endl;
			cin>>runs;
			cout<<"enter your match : "<<endl;
			cin>>match;
			cout<<"enter your wickets : "<<endl;
			cin>>wickets;
			cout<<"enter your hattrick : "<<endl;
			cin>>hattrick;
			
			
			cout<<"your runs is "<<runs<<endl;
			cout<<"your match is"<<match<<endl;
			cout<<"your wickets is "<<wickets<<endl;
			cout<<"your hatrick is "<<hattrick<<endl;
//			cout<<"your avg is : "<<match+runs+wickets+hattrick/2;
			
//			cout<<"avg is "<<wickets/match<<endl;
			
			
		}
		
	 void	batsman()
		{
				int runs,match,century;
			cout<<"enter your runs : "<<endl;
			cin>>runs;
			cout<<"enter your match : "<<endl;
			cin>>match;
			cout<<"enter your century : "<<endl;
			cin>>century;

			
			cout<<"your runs is "<<runs<<endl;
			cout<<"your match is"<<match<<endl;
			cout<<"your century is "<<century<<endl;
            cout<<"your avg is : "<<runs/match;
			
		}
	};
	

		int main()
		{
//			cricketer c;
            con c;
			
			string choice;
			cout<<"welcome to our team "<<endl;
			cout<<"your role: "<<endl;
			cin>>choice;
			
			cout<<name<<"you choose : "<<choice<<endl;
			if(choice == "bowler")
			{
				
				c.bowler();
			
		}
		else if(choice == "batsman")
		{
			c.batsman();
		}
	}
	
