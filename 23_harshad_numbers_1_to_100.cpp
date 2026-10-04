// Q23. Display all Harshad numbers between 1 and 100.
#include <iostream>
using namespace std;

int main() {
    cout << "Harshad numbers between 1 and 100: ";

    for (int number = 1; number <= 100; number++) {
        int temp = number;
        int digitSum = 0;

        while (temp != 0) {
            digitSum += temp % 10;
            temp /= 10;
        }

        if (number % digitSum == 0)
            cout << number << " ";
    }

    return 0;
}
