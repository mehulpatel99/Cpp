#include<iostream>
using namespace std;

class Matrix {
    int arr[3];

public:
    Matrix() {}

    Matrix(int a, int b, int c) {
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
    }

    Matrix operator+(const Matrix& other) {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            result.arr[i] = arr[i] + other.arr[i];
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1(1, 2, 3);
    Matrix m2(4, 5, 6);

    Matrix m3 = m1 + m2;

    cout << "Addition of two matrices: ";
    m3.display();

    return 0;
}
