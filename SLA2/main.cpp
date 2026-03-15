#include "Address.h"
#include <iostream>
using namespace std;

int main()
{
    Address a1, a2;

    cout << "Enter Address 1" << endl;
    a1.accept();

    cout << "\nEnter Address 2" << endl;
    a2.accept();

    cout << "\nAddress 1" << endl;
    a1.display();

    cout << "\nAddress 2" << endl;
    a2.display();

    if (a1.isSame(a2))
        cout << "\nAddresses are SAME" << endl;
    else
        cout << "\nAddresses are DIFFERENT" << endl;

    if (a1 == a2)
        cout << "(Using operator==) Addresses are SAME" << endl;
    else
        cout << "(Using operator==) Addresses are DIFFERENT" << endl;

    return 0;
}