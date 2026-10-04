// Q3. Search for a number in a sequence and stop when found using break.
#include <iostream>
using namespace std;

int main() {
    int searchNumber;

    cout << "Enter number to search (1-10): ";
    cin >> searchNumber;

    for (int number = 1; number <= 10; number++) {
        cout << "Checking " << number << endl;

        if (number == searchNumber) {
            cout << "Number found!" << endl;
            break;
        }
    }

    return 0;
}
