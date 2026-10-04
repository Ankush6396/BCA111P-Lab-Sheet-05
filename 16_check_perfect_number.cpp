// Q16. Check whether a number is a perfect number.
#include <iostream>
using namespace std;

int main() {
    int number, divisorSum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int divisor = 1; divisor <= number / 2; divisor++) {
        if (number % divisor == 0)
            divisorSum += divisor;
    }

    if (number > 0 && divisorSum == number)
        cout << number << " is a perfect number.";
    else
        cout << number << " is not a perfect number.";

    return 0;
}
