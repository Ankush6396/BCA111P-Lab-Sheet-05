// Q5. Menu-driven calculator with default case in switch.
#include <iostream>
using namespace std;

int main() {
    double firstNumber, secondNumber, result;
    int choice;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            result = firstNumber + secondNumber;
            cout << "Result = " << result;
            break;
        case 2:
            result = firstNumber - secondNumber;
            cout << "Result = " << result;
            break;
        case 3:
            result = firstNumber * secondNumber;
            cout << "Result = " << result;
            break;
        case 4:
            if (secondNumber != 0)
                cout << "Result = " << firstNumber / secondNumber;
            else
                cout << "Division by zero is not allowed.";
            break;
        default:
            cout << "Invalid choice.";
    }

    return 0;
}
