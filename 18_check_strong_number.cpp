// Q18. Check whether a number is a strong number.
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    if (number == 0)
        sum = 1;

    while (number != 0) {
        int digit = number % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++)
            factorial *= i;

        sum += factorial;
        number /= 10;
    }

    if (sum == originalNumber)
        cout << originalNumber << " is a strong number.";
    else
        cout << originalNumber << " is not a strong number.";

    return 0;
}
