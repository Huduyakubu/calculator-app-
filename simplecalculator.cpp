#include <iostream>
using namespace std;

int main()
{
    char operatorChar;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operatorChar;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operatorChar)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Error: Cannot divide by zero." << endl;
            return 1;
        }
        result = num1 / num2;
        break;
    default:
        cout << "Invalid operator. Please enter a valid operator (+, -, *, /)." << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
