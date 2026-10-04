// Q11. Calculate factorial of a number using while loop.
#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1;
    int counter = 1;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers.";
        return 0;
    }

    while (counter <= number) {
        factorial *= counter;
        counter++;
    }

    cout << "Factorial = " << factorial;
    return 0;
}
