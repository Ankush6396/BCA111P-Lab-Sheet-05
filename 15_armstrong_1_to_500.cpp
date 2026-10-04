// Q15. Display Armstrong numbers between 1 and 500.
#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500: ";

    for (int number = 1; number <= 500; number++) {
        int temp = number;
        int digitCount = 0;
        int sum = 0;

        while (temp != 0) {
            digitCount++;
            temp /= 10;
        }

        temp = number;
        while (temp != 0) {
            int digit = temp % 10;
            int power = 1;

            for (int i = 1; i <= digitCount; i++)
                power *= digit;

            sum += power;
            temp /= 10;
        }

        if (sum == number)
            cout << number << " ";
    }

    return 0;
}
