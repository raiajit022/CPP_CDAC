#include <iostream>
using namespace std;

int main()
{
    float op1, op2, result;
    char oper;

    cout << "Enter operand 1: ";
    cin >> op1;

    cout << "Enter operand 2: ";
    cin >> op2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> oper;

    switch(oper)
    {
        case '+':
            result = op1 + op2;
            break;

        case '-':
            result = op1 - op2;
            break;

        case '*':
            result = op1 * op2;
            break;

        case '/':
            result = op1 / op2;
            break;

        default:
            cout << "Invalid operator";
            return 0;
    }

    cout << "The result of " << op1 << oper << op2 << " is " << result;

    return 0;
}