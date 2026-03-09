#include <iostream>
using namespace std;

void calculaters(int num)
{
    int sum = 0;
    
    do
    {
        cout<< " Enter number to sum ";
        cin >> num;

        sum +=num;
    }
    while (num != 0);
    
        cout<< "Sum "<< sum;
}

int main()
{
    int num = 0;
    int sum = 0;
    calculaters(num);
    return 0;
}