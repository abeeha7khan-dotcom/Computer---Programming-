#include <iostream>
using namespace std;

// Function declaration
void multiply(int num1, int num2);     // void is taken because the result is displayed in the function not the main function

int main() {
    

    // Function call
    multiply(3, 5);

    return 0;
}

// Function definition
void multiply(int num1, int num2) {
    int product = num1 * num2;
    cout << "Product = " << product << endl;
}