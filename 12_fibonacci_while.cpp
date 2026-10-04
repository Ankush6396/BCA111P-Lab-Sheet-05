// Q12. Generate Fibonacci series using while loop.
#include <iostream>
using namespace std;

int main() {
    int terms;
    long long first = 0, second = 1;
    int counter = 1;

    cout << "Enter number of terms: ";
    cin >> terms;

    while (counter <= terms) {
        cout << first << " ";

        long long next = first + second;
        first = second;
        second = next;
        counter++;
    }

    return 0;
}
