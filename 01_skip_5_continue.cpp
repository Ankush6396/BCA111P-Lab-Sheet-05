// Q1. Print numbers from 1 to 10, but skip 5 using continue.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 10; number++) {
        if (number == 5)
            continue;

        cout << number << " ";
    }
    return 0;
}
