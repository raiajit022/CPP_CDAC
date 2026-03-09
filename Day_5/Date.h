#ifndef DATE_H
#define DATE_H

class Date {
private:
    int dd, mm, yyyy;

public:
    // Constructors & Destructor
    Date();                         // Default: 1/1/2000
    Date(int d, int m, int y);      // Parameterized
    ~Date();

    // Logic Functions
    void display();
    bool isLeapYear(int y);
    int daysInMonth(int m, int y);
    int compare(Date d2);           // Helper for operators

    // Overloaded Operators
    bool operator == (Date d2);
    bool operator != (Date d2);
    Date operator + (int daysToAdd);
    int operator - (Date d2);       // Difference in days
};

#endif