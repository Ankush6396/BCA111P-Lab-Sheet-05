// Q30. Display the sum of series: 1^3 + 2^3 + 3^3 + ... + N^3.
#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int number = 1; number <= n; number++)
        sum += 1LL * number * number * number;

    cout << "Sum of cubes = " << sum;
    return 0;
}
