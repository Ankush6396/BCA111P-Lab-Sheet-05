// Q7. Read numbers until -1 is entered and skip negative numbers using continue.
#include <iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter a number (-1 to stop): ";
        cin >> number;

        if (number == -1)
            break;

        if (number < 0)
            continue;

        cout << "Accepted number: " << number << endl;
    }

    return 0;
}
