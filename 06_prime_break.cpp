// Q6. Check whether a number is prime and terminate loop early using break.
#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 2) {
        isPrime = false;
    } else {
        for (int divisor = 2; divisor <= number / 2; divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << number << " is a prime number.";
    else
        cout << number << " is not a prime number.";

    return 0;
}
