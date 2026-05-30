#include <iostream>
using namespace std;

// Function declaration
int calculateSum(int arr[], int size);

int main() {
    int arr[10];
    int sum;
    double average;

    // Taking input
    cout << "Enter 10 integers:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Function call
    sum = calculateSum(arr, 10);

    // Calculating average
    average = sum / 10.0;

    // Displaying results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

// Function definition
int calculateSum(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}