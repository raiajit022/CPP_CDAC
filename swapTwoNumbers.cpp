#include <iostream>
using namespace std;

int main()
{
    int num1 = 20, num2 = 40;

    cout << "Before swapping : " << endl;
    cout << "num1 is : " << num1 << endl;
    cout << "num2 is : " << num2 << endl;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping : " << endl;
    cout << "num1 is : " << num1 << endl;
    cout << "num2 is : " << num2 << endl;
}
