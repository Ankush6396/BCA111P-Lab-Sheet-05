// Q24. Display multiplication tables from 1 to 10.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 10; number++) {
        cout << "\nTable of " << number << ":\n";

        for (int multiplier = 1; multiplier <= 10; multiplier++) {
            cout << number << " x " << multiplier
                 << " = " << number * multiplier << endl;
        }
    }

    return 0;
}
