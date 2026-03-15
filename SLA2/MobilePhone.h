#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include <iostream>
#include <string>
using namespace std;

class MobilePhone
{
private:
    string modelNo;
    float price;
    string manufacturer;
    int quantity;

public:
    // constructors
    MobilePhone();
    MobilePhone(string m, float p, string man, int q);

    // member functions
    void accept();
    void display();

    string getModelNo();
    int getQuantity();
};

#endif