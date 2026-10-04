// Q20. Print reverse of a number and check whether it is palindrome.
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, reverseNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    while (number != 0) {
        int digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number /= 10;
    }

    cout << "Reverse = " << reverseNumber << endl;

    if (originalNumber == reverseNumber)
        cout << "It is a palindrome number.";
    else
        cout << "It is not a palindrome number.";

    return 0;
}
