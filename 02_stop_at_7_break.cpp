// Q2. Print numbers from 1 to 10, but stop at 7 using break.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 10; number++) {
        if (number == 7)
            break;

        cout << number << " ";
    }
    return 0;
}
