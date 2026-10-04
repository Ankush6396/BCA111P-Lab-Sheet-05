// Q25. Print prime factors of a given number.
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Prime factors: ";

    for (int divisor = 2; divisor <= number; divisor++) {
        while (number % divisor == 0) {
            cout << divisor << " ";
            number /= divisor;
        }
    }

    return 0;
}
