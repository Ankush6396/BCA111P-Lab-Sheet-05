// Q14. Check whether a given number is an Armstrong number.
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, digitCount = 0;
    long long sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    int temp = number;
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        long long power = 1;

        for (int i = 1; i <= digitCount; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == originalNumber)
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";

    return 0;
}
