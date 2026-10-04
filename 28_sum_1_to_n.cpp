// Q28. Display the sum of series: 1 + 2 + 3 + ... + N.
#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int number = 1; number <= n; number++)
        sum += number;

    cout << "Sum = " << sum;
    return 0;
}
