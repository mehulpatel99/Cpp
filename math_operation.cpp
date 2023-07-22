#include <iostream>
using namespace std;
class MathOperations {
public:
    // Addition
    int mathOperation(int a, int b) {
        return a + b;
    }

    // Subtraction
    int mathOperation(int a, int b,int c) {
        return a - b - c;
    }

    // Multiplication
    int mathOperation(int a, int b,int c, int d) {
        return a * b * c * d;
    }

//     Division
    double mathOperation(double a, double b) {
        if (b != 0.0) {
            return a / b;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 0.0;
        }
    }
};

int main() {
    MathOperations math;

    // Addition
    int resultAdd = math.mathOperation(5, 7);
    cout << "Addition Result: " << resultAdd<<endl;

    // Subtraction
    int resultSub = math.mathOperation(15, 9,8);
    cout << "Subtraction Result: " << resultSub << endl;

    // Multiplication
    int resultMul = math.mathOperation(2, 3,6,8);
    cout << "Multiplication Result: " << resultMul << endl;

//     Division
    double resultDiv = math.mathOperation(10.0, 2.5);
    cout << "Division Result: " << resultDiv << endl;

    return 0;
}


