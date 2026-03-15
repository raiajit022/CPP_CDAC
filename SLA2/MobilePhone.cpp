#include "MobilePhone.h"

// Default constructor
MobilePhone::MobilePhone()
{
    modelNo = "";
    price = 0;
    manufacturer = "";
    quantity = 0;
}

// Parameterized constructor
MobilePhone::MobilePhone(string m, float p, string man, int q)
{
    modelNo = m;
    price = p;
    manufacturer = man;
    quantity = q;
}

// Accept mobile details
void MobilePhone::accept()
{
    cout<<"Enter Model No: ";
    cin>>modelNo;

    cout<<"Enter Price: ";
    cin>>price;

    cout<<"Enter Manufacturer: ";
    cin>>manufacturer;

    cout<<"Enter Quantity: ";
    cin>>quantity;
}

// Display mobile details
void MobilePhone::display()
{
    cout<<"Model No: "<<modelNo<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Manufacturer: "<<manufacturer<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"--------------------------"<<endl;
}

// Getter functions
string MobilePhone::getModelNo()
{
    return modelNo;
}

int MobilePhone::getQuantity()
{
    return quantity;
}