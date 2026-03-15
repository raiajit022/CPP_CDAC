#include <iostream>
using namespace std;

double power(double n, int p = 2)
{
    double result = 1;

    for(int i = 1; i <= p; i++)
    {
        result = result * n;
    }

    return result;
}

int main()
{
    double num;
    int p;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter power (enter 0 if you want default square): ";
    cin >> p;

    if(p == 0)
        cout << "Result = " << power(num) << endl;
    else
        cout << "Result = " << power(num, p) << endl;

    return 0;
}