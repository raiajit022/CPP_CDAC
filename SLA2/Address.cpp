#include "Address.h"

// Default constructor
Address::Address()
{
    houseNo = 0;
    colony = "";
    area = "";
    city = "";
    pincode = 0;
}

// Parameterized constructor
Address::Address(int h, string c, string a, string ci, int p)
{
    houseNo = h;
    colony = c;
    area = a;
    city = ci;
    pincode = p;
}

// Accept function
void Address::accept()
{
    cout << "Enter House No: ";
    cin >> houseNo;

    cout << "Enter Colony: ";
    cin >> colony;

    cout << "Enter Area: ";
    cin >> area;

    cout << "Enter City: ";
    cin >> city;

    cout << "Enter Pincode: ";
    cin >> pincode;
}

// Display function
void Address::display()
{
    cout << "House No: " << houseNo << endl;
    cout << "Colony: " << colony << endl;
    cout << "Area: " << area << endl;
    cout << "City: " << city << endl;
    cout << "Pincode: " << pincode << endl;
}

// Compare addresses
bool Address::isSame(Address a)
{
    if (houseNo == a.houseNo &&
        colony == a.colony &&
        area == a.area &&
        city == a.city &&
        pincode == a.pincode)
        return true;

    return false;
}

// Operator overloading ==
bool Address::operator==(Address a)
{
    return isSame(a);
}