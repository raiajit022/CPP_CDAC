#include "Payslip.h"

// Default constructor
Payslip::Payslip()
{
    empNo = 0;
    empName = "";
    DA = 0;
    HRA = 0;
    basicSalary = 0;
}

// Parameterized constructor
Payslip::Payslip(int no, string name, float da, float hra, float basic)
{
    empNo = no;
    empName = name;
    DA = da;
    HRA = hra;
    basicSalary = basic;
}

// Accept function
void Payslip::accept()
{
    cout << "Enter Employee Number: ";
    cin >> empNo;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, empName);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter DA: ";
    cin >> DA;

    cout << "Enter HRA: ";
    cin >> HRA;
}

// Salary calculation
float Payslip::calculateSalary()
{
    return basicSalary + DA + HRA;
}

// Display function
void Payslip::display()
{
    cout << "\nEmployee Number: " << empNo << endl;
    cout << "Employee Name: " << empName << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "DA: " << DA << endl;
    cout << "HRA: " << HRA << endl;
    cout << "Total Salary: " << calculateSalary() << endl;
}