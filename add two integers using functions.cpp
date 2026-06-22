

// add_two_numbers.cpp
// A simple C++ program to add two integers using functions

#include <iostream>
using namespace std;

// Function prototype
int add(int a, int b);

int main() {
    int num1, num2, sum;

    cout << "Enter first num: ";
    cin >> num1;

    cout << "Enter second num: ";
    cin >> num2;

    // Call the function to add the numbers
    sum = add(num1, num2);

    cout << "Sum is = " << sum << endl;

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}

