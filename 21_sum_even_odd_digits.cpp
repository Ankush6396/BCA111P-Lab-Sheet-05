// Q21. Find the sum of all even and odd digits in a given number.
#include <iostream>
using namespace std;

int main() {
    int number;
    int evenSum = 0, oddSum = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        number = -number;

    while (number != 0) {
        int digit = number % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        number /= 10;
    }

    cout << "Sum of even digits = " << evenSum << endl;
    cout << "Sum of odd digits = " << oddSum;

    return 0;
}
