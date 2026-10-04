// Q26. Find LCM of two numbers using loops.
#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, lcm;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    lcm = (firstNumber > secondNumber) ? firstNumber : secondNumber;

    while (true) {
        if (lcm % firstNumber == 0 && lcm % secondNumber == 0)
            break;

        lcm++;
    }

    cout << "LCM = " << lcm;
    return 0;
}
