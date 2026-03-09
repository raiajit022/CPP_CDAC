#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
int main()
{
    int num;
    cout << "enter number ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << factorial(i) << endl;
    }
}