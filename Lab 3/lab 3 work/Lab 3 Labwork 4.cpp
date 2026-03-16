
// Name: Abeeha Khan
// Department: Electrical Engineering (communication)
// Registration No: BF25NWELE0663
// Section: B

#include <iostream>
using namespace std;

int main()
{
    int age;  // variable to store age

    cout << "Enter your age: ";
    cin >> age;  // read age from user

    if (age >= 18)  // check if age is 18 or older
        cout << "You are 18 or older." << endl;
    else
        cout << "You are under 18." << endl;

    return 0;  // program ends
}
