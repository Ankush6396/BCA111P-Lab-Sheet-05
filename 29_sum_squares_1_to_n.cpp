// Q29. Display the sum of series: 1^2 + 2^2 + 3^2 + ... + N^2.
#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int number = 1; number <= n; number++)
        sum += 1LL * number * number;

    cout << "Sum of squares = " << sum;
    return 0;
}
