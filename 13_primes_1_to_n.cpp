// Q13. Find and print all prime numbers between 1 and N.
#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter N: ";
    cin >> limit;

    cout << "Prime numbers: ";

    for (int number = 2; number <= limit; number++) {
        bool isPrime = true;

        for (int divisor = 2; divisor <= number / 2; divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << number << " ";
    }

    return 0;
}
