#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int units;
    float amount = 0, surcharge = 0;

    cout << "Enter User Name: ";
    cin >> name;

    cout << "Enter Units Consumed: ";
    cin >> units;

    if(units <= 100)
    {
        amount = units * 5.5;
    }
    else if(units <= 300)
    {
        amount = (100 * 5.5) + (units - 100) * 7.25;
    }
    else
    {
        amount = (100 * 5.5) + (200 * 7.25) + (units - 300) * 8.75;
    }

    if(amount < 60)
    {
        amount = 60;
    }

    if(amount > 750)
    {
        surcharge = amount * 0.10;
        amount = amount + surcharge;
    }

    cout << "\nUser Name: " << name;
    cout << "\nUnits Consumed: " << units;
    cout << "\nTotal Bill Amount: Rs. " << amount << endl;

    return 0;
}