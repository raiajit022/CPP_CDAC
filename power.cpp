#include <iostream>
using namespace std;

int main()
{
    int num1, pow;
    int res = 1;
    cout << "enter your number : ";
    cin >> num1;

    cout << "enter power of number which you want of number : ";
    cin >> pow;

    for (int i = 1; i <= pow; i++)
    {
        res *= num1;
    }
    cout<<"\nAnswer is:"<<res;
    return 0;
}