// Q10. Count positive numbers entered until 0 is entered.
#include <iostream>
using namespace std;

int main() {
    int number;
    int positiveCount = 0;

    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> number;

        if (number == 0)
            break;

        if (number > 0)
            positiveCount++;
    }

    cout << "Total positive numbers = " << positiveCount;
    return 0;
}
