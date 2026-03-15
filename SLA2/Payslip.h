#ifndef PAYSLIP_H
#define PAYSLIP_H

#include <iostream>
#include <string>
using namespace std;

class Payslip
{
private:
    int empNo;
    string empName;
    float DA;
    float HRA;
    float basicSalary;

public:
    // constructors
    Payslip();
    Payslip(int no, string name, float da, float hra, float basic);

    // member functions
    void accept();
    void display();
    float calculateSalary();
};

#endif