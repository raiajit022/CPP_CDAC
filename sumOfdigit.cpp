#include <iostream>
using namespace std;

int sumOfDigit(int num)
{
    int digit, sum = 0;
    for (int i = 0; i < 4; i++)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num, sum;
    cout << "Enter your number : ";
    cin >> num;

    sum = sumOfDigit(num);
    cout << "sum of all digits in " << num << " is " << sum;
}
   