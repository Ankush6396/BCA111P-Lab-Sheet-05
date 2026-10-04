// Q19. Display all strong numbers between 1 and 500.
#include <iostream>
using namespace std;

int main() {
    cout << "Strong numbers between 1 and 500: ";

    for (int number = 1; number <= 500; number++) {
        int temp = number;
        int sum = 0;

        while (temp != 0) {
            int digit = temp % 10;
            int factorial = 1;

            for (int i = 1; i <= digit; i++)
                factorial *= i;

            sum += factorial;
            temp /= 10;
        }

        if (sum == number)
            cout << number << " ";
    }

    return 0;
}
