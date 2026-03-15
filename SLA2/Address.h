#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
    int houseNo;
    string colony;
    string area;
    string city;
    int pincode;

public:
    // constructors
    Address();
    Address(int h, string c, string a, string ci, int p);

    // member functions
    void accept();
    void display();
    bool isSame(Address a);

    // operator overloading
    bool operator==(Address a);
};

#endif