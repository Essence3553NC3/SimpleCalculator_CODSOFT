#include <iostream>

using namespace std;

int main() {
    char operatorSymbol;
    double num1, num2;

    cout << "Simple Calculator" << endl;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operatorSymbol;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operatorSymbol) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}

