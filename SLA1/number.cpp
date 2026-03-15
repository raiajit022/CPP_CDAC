#include <iostream>
using namespace std;

void checkPrime(int n)
{
    int i, flag = 0;

    if(n <= 1)
    {
        cout << "Not a Prime Number\n";
        return;
    }

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout << "Prime Number\n";
    else
        cout << "Not a Prime Number\n";
}

void checkOddEven(int n)
{
    if(n % 2 == 0)
        cout << "Even Number\n";
    else
        cout << "Odd Number\n";
}

void checkPositiveNegative(int n)
{
    if(n > 0)
        cout << "Positive Number\n";
    else if(n < 0)
        cout << "Negative Number\n";
    else
        cout << "Number is Zero\n";
}

int main()
{
    int num, choice;

    cout << "Enter a number: ";
    cin >> num;

    do
    {
        cout << "\n--- MENU ---";
        cout << "\n1. Prime number or not";
        cout << "\n2. Odd or Even";
        cout << "\n3. Positive or Negative";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                checkPrime(num);
                break;

            case 2:
                checkOddEven(num);
                break;

            case 3:
                checkPositiveNegative(num);
                break;

            case 4:
                cout << "Exiting Program\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}