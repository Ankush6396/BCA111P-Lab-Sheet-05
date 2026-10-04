// Q22. Check whether a given number is a Harshad number.
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, digitSum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    originalNumber = number;

    while (number != 0) {
        digitSum += number % 10;
        number /= 10;
    }

    if (originalNumber > 0 && originalNumber % digitSum == 0)
        cout << originalNumber << " is a Harshad number.";
    else
        cout << originalNumber << " is not a Harshad number.";

    return 0;
}
