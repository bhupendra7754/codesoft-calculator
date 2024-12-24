#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Welcome to the Combined Calculator!\n";
    cout << "Available operations:\n";
    cout << "+ : Addition\n";
    cout << "- : Subtraction\n";
    cout << "* : Multiplication\n";
    cout << "/ : Division\n";
    cout << "% : Modulus (integers only)\n";
    cout << "^ : Power\n";
    cout << "r : Square root (for the first number only)\n";

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operation: ";
    cin >> operation;

    if (operation != 'r') {
        cout << "Enter the second number: ";
        cin >> num2;
    }

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The result is: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The result is: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The result is: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The result is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        case '%':
            if (num2 != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "The result is: " << result << endl;
            } else {
                cout << "Error: Modulus by zero is not allowed.\n";
            }
            break;
        case '^':
            result = pow(num1, num2);
            cout << "The result is: " << result << endl;
            break;
        case 'r':
            if (num1 >= 0) {
                result = sqrt(num1);
                cout << "The square root is: " << result << endl;
            } else {
                cout << "Error: Square root of a negative number is not allowed.\n";
            }
            break;
        default:
            cout << "Invalid operation. Please try again.\n";
    }

    return 0;
}
