// Q4. Display even numbers between 1 and 20, skipping multiples of 4.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 20; number++) {
        if (number % 2 != 0)
            continue;

        if (number % 4 == 0)
            continue;

        cout << number << " ";
    }
    return 0;
}
