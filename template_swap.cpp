#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intValue1 ;
    int intValue2 ;
     cout<<"enter your 2 values"<<endl;
     cin>>intValue1>>intValue2;
    cout << "Before swapping: intValue1 = " << intValue1 << ", intValue2 = " << intValue2 << endl;
    
    swapValues(intValue1, intValue2);
    
    cout<<endl<<endl;
    cout << "After swapping: intValue1 = " << intValue1 << ", intValue2 = " << intValue2 << endl;

  
}
