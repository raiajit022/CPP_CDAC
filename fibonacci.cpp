#include <iostream>
using namespace std;

void fibonacci(int noElem)
{
    int num1 = 0, num2 = 1, num3;

    cout << num1<<"\t";
    cout << num2<<"\t";

    for (int i = 2; i < noElem; i++)
    {

        num3 = num1 + num2;
        cout << num3<<"\t";

        num1 = num2;
        num2 = num3;
    }
}
int main()
{
    int noOfelements;

    cout << "enter no of fibonacci elements to be print : ";
    cin >> noOfelements;

    fibonacci(noOfelements);
    return 0;
}
