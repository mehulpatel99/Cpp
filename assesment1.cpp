#include<iostream>
#include<string>

using namespace std;

class lecture
{
	string name;
	string subject;
	string course;
	int lecture;
	public:
		
	void assign(string n, string s, string c, int num) {
        name = n;
        subject = s;
        course = c;
        lecture = num;
    }
        
    void add_details() {
        cout << "Enter name of lecturer: ";
        cin >> name;
        cout << "Enter name of subject: ";
        cin >> subject;
        cout << "Enter name of course: ";
        cin >> course;
        cout << "Enter number of lecturers: ";
        cin >> lecture;
    }
   
    void display() {
        cout << "Name of lecturer: " << name << endl;
        cout << "Name of subject: " << subject << endl;
        cout << "Name of course: " << course << endl;
        cout << "Number of lecturers: " << lecture << endl;
    }
};

int main()
{
	lecture lect[5];
	
	 for (int i = 0; i < 6; i++) {
        cout << "Enter details for lecturer " << i + 1 << ":" << endl;
        lect[i].add_details();
        cout << endl;
    }

//    cout << "Lecture details:" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << "Lecturer " << i + 1 << ":" << endl;
//        lect[i].display();
//        cout << endl;
//    }
	
	
}