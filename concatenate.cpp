#include<iostream>
#include<string.h>
using namespace std;

class String {
    char str[100];

public:
    String() {}

    String(char s[]) {
        strcpy(str, s);
    }

    String operator+(String& other) {
        String result;
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello");
    String s2("World");

    String s3 = s1 + s2;

    cout << "Concatenated string: ";
    s3.display();

    return 0;
}